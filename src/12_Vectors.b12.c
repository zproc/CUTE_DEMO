#include <gb/gb.h>

extern const unsigned char Vector_Tiles[];
extern const unsigned char Vector_TilesPAL[];
extern const unsigned char Vector_Anim_Water[]; 
extern const unsigned char Vector_MapPLN0[];
extern const unsigned char Vector_MapPLN1[];
extern const unsigned char Vector_Map_WaterPLN0[];
extern const unsigned char Vector_Map_WaterPLN1[];


const UWORD Vector_SPAL[] = {31507,30718,15855,0};

const UINT8 Wave_Y[] = {8, 9,
11, 13, 14, 15, 15, 15, 15, 14, 13, 11,
9, 7, 5, 4, 2, 1, 0, 0, 0, 0,
1, 3, 4, 6, 8, 8};

extern UINT16 TIMER;
extern UINT8 SPR;
extern UINT8 SPRX;
extern UINT8 SPRY;
extern UINT8 v;
extern UINT8 SSPEED;
extern UINT8 SSPEED1;

extern UINT16 GFX_Offset;
extern UINT16 GFX_Offset2;
extern UINT8 Scene;
int SSTATE;

void DMA_TRANSFER(UINT8 tiles, UINT16 *source,UINT16 *destination); 

void Vectors_Set() {
	
	VBK_REG = 0;
		set_bkg_data(0, 64, Vector_Tiles);
		set_bkg_tiles( 0, 0, 32, 18, Vector_MapPLN0); 
	VBK_REG = 1;
		set_bkg_tiles( 0, 0, 32, 18, Vector_MapPLN1); 
		
	VBK_REG = 0;	  
	
	set_bkg_palette(0, 2, Vector_TilesPAL);
	set_sprite_palette( 0, 1, Vector_SPAL);//I didn't use the exported one, because it is in another bank and....
	
	SHOW_SPRITES;
	SHOW_BKG;

	GFX_Offset = 0;
	GFX_Offset2 = 640*6;
	
	SSPEED = 0;
	SSPEED1 = 144;
	SSTATE = 1;
	SPRX = 246;
	SPRY = 6;
	Scene++;
	
}

void Vectors_Run(){
	//UPDATE TILES (Water)
	if (TIMER < 730) DMA_TRANSFER(40,&Vector_Anim_Water+GFX_Offset2,0x9130);
	
	if ((TIMER > 20) && (TIMER < 56)) WY_REG+=4;
	if ((TIMER > 730) && (TIMER < 766)) WY_REG-=4;	
	
	if (TIMER == 110)for (v = 0; v<24;v++) set_sprite_prop(v, 0x80);

	if ((TIMER > 58) && (TIMER <120)){WY_REG--;SSPEED1--;SPRX+=2;}
	if ((TIMER > 120) && (TIMER <700)){
		WY_REG = SSPEED1+Wave_Y[SPRY];
		SPRX = 104+Wave_Y[SPRY];
	}
	if ((TIMER > 700) && (TIMER <730)){
		WY_REG = SSPEED1+Wave_Y[SPRY];
		SSPEED1+=2;
		SPRX+=2;
	}	
	
	
	//UPDATE SPRITES (BOAT)
	if (GFX_Offset > 4608) {
		GFX_Offset = 0;
		SSTATE = SSTATE * -1;
		VBK_REG = 1;	   
		if (SSTATE == 1) {for (v = 0; v<24;v++) set_sprite_prop(v, 0x80);}
		if (SSTATE == -1) {for (v = 0; v<24;v++) set_sprite_prop(v, 0xA0);}
		VBK_REG = 0;	
	}
	
	if (TIMER == 58){
		VBK_REG = 0;
		set_win_tiles( 0, 0, 20, 10, Vector_Map_WaterPLN0);
		VBK_REG = 1;
		set_win_tiles( 0, 0, 20, 10, Vector_Map_WaterPLN1);
		VBK_REG = 0;
	}
	
	
	SPR = 0;
	if (SSTATE == 1){
		for (v = 0;v<8;v++){
			move_sprite(v,58+SPR,SPRX-32);
			move_sprite(v+8,58+SPR,SPRX-16);
			move_sprite(v+16,58+SPR,SPRX);
			SPR+=8;
		}
	}
	SPR = 0;
	if (SSTATE == -1){
		for (v = 8;v>0;v--){
			move_sprite(v-1,58+SPR,SPRX-32);
			move_sprite(v+7,58+SPR,SPRX-16);
			move_sprite(v+15,58+SPR,SPRX);
			SPR+=8;
		}
	}	
	
	if (SSPEED == 5){
		SSPEED = 0; 
		if (TIMER > 130) GFX_Offset+= 768;
		GFX_Offset2+= 640;
		SPRY++;}
	if (GFX_Offset2 > 5000) GFX_Offset2 = 0;
	if (SPRY == 27) SPRY = 0;
	
	if (TIMER == 768){
		TIMER = 0;
		Scene++;
		for (v = 0;v<40;v++)move_sprite(v,200,200);
	}	

	SSPEED++;
	TIMER++;
}
