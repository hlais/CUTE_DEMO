#include <gb/gb.h>

//100 frames of 144 scanlines in one bank

extern const unsigned char Persp3DMapPLN0[];
extern const unsigned char Persp3DMapPLN1[];
extern const unsigned char Persp3DTilesBLK0[];
extern const unsigned char Persp3DTilesBLK1[];
extern const unsigned char Persp3DClouds[];
extern const unsigned char Persp3DCloudsPAL[];
extern const UWORD Persp3DTilesPAL[];
extern const unsigned char persp3d_scanlines[]; 

UINT16 Persp3D_Frame = 0; 
UINT16 A = 0;

extern UINT16 TIMER;
extern UINT8 Scene;

extern UINT8 SPR;
extern UINT8 SPRX;
extern UINT8 SSPEED;
extern UINT8 v;

void Persp3D_update(){ 	

	if ((TIMER > 18) && (TIMER < 58))WX_REG+=4;
	if ((TIMER > 910) && (TIMER < 950))WX_REG-=4;
	
	Persp3D_Frame+=144;
	if (Persp3D_Frame == 144*31) Persp3D_Frame = 0; 

	//CLOUDS
	SPR = 0;
	for (v = 0;v<6;v++){
		move_sprite(v,30+SPR+SPRX,28);
		move_sprite(v+6,30+SPR+SPRX,44);
		SPR+=8;
	}
	move_sprite(12,190+SPRX,20);move_sprite(13,198+SPRX,20);
	
	if (SSPEED == 4){SSPEED = 0;SPRX--;}
	SSPEED++;
	
	if (TIMER == 960){TIMER = 0; Scene++;for (v = 0;v<40;v++)move_sprite(v,200,200);}
	TIMER++;
	
}


void Persp3D_Set(){

	VBK_REG = 0;	   
	    set_bkg_tiles( 0, 0, 32, 18, Persp3DMapPLN0);
		set_bkg_data(0, 256, Persp3DTilesBLK0);
		set_sprite_data( 0, 28, Persp3DClouds);//in 8x8 mode!!!
	VBK_REG = 1;	   
	   set_bkg_tiles( 0, 0, 32, 18, Persp3DMapPLN1); 
	   set_bkg_data(0x0, 212, Persp3DTilesBLK1); 
	   for (v = 0; v<28;v++) set_sprite_prop(v, 0x80);
	VBK_REG = 0;
	
	SHOW_BKG;
	SHOW_SPRITES;
	
	set_bkg_palette(0, 8, Persp3DTilesPAL);
	set_sprite_palette( 0, 1, Persp3DCloudsPAL);	
	
	SPRX = 100;
	SSPEED = 0;

	Scene++;
}	

void Perspective3D_Scanlines(){ 

    //STAT_REG == ScanLine status 0, 1, 2 
	A = LY_REG;
	if (STAT_REG & 1) SCX_REG = -(persp3d_scanlines[LY_REG+Persp3D_Frame]-persp3d_scanlines[A]);
	
}


const unsigned  char persp3d_scanlines[] = //grass 29 pixels
{
	0, 0, 0, 0, 0, 0, 0, 0, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 0, 0, 160, 160, 
	160, 160, 160, 160, 160, 160, 160, 160, 160, 160, 
	160, 160, 160, 160, 160, 160, 160, 160, 160, 160, 
	160, 160, 160, 160, 160, 160, 160, 160, 160, 160, 
	160, 160, 160, 160, 160, 160, 160, 160, 160, 160, 
	160, 160, 160, 160, 160, 160, 160, 160, 160, 160, 
	160, 160, 160, 160, 160, 160, 160, 160, 160, 160, 
	160, 160, 160, 160, 160, 160, 160, 160, 160, 160, 
	160, 160, 160, 160, 160, 160, 160, 160, 160, 160, 
	160, 160, 160, 160, 160, 160, 160, 160, 160, 160, 
	160, 160, 160, 160, 0, 0, 0, 0, 0, 0, 
	0, 0, 111, 111, 111, 111, 111, 111, 111, 111, 
	111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 
	111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 
	111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 
	0, 0, 159, 159, 159, 159, 159, 159, 159, 159, 
	159, 159, 159, 159, 159, 159, 159, 159, 159, 159, 
	159, 159, 159, 159, 159, 159, 159, 159, 159, 159, 
	159, 159, 158, 158, 158, 158, 158, 158, 158, 158, 
	158, 158, 158, 158, 158, 158, 158, 158, 158, 158, 
	158, 158, 158, 158, 158, 158, 158, 158, 158, 158, 
	158, 158, 158, 158, 158, 158, 158, 158, 158, 158, 
	158, 158, 158, 158, 158, 158, 158, 158, 157, 157, 
	157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 
	157, 157, 157, 157, 157, 157, 157, 157, 0, 0, 
	0, 0, 0, 0, 0, 0, 111, 111, 111, 111, 
	111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 
	111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 
	111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 
	111, 111, 111, 111, 0, 0, 158, 158, 158, 158, 
	158, 158, 158, 158, 158, 158, 158, 158, 158, 158, 
	158, 158, 158, 158, 158, 158, 158, 158, 158, 157, 
	157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 
	157, 157, 157, 156, 156, 156, 156, 156, 156, 156, 
	156, 156, 156, 156, 156, 156, 156, 155, 155, 155, 
	155, 155, 155, 155, 155, 155, 155, 155, 155, 155, 
	155, 155, 155, 155, 155, 155, 155, 155, 155, 155, 
	155, 155, 155, 155, 155, 155, 155, 155, 155, 155, 
	155, 154, 154, 154, 154, 154, 154, 154, 154, 154, 
	154, 154, 0, 0, 0, 0, 0, 0, 0, 0, 
	110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 
	110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 
	110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 
	110, 110, 110, 110, 110, 110, 110, 110, 0, 0, 
	157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 
	157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 
	157, 156, 156, 156, 156, 156, 156, 156, 156, 156, 
	155, 155, 155, 155, 155, 155, 155, 155, 155, 154, 
	154, 154, 154, 154, 154, 154, 154, 154, 153, 153, 
	153, 153, 153, 153, 153, 153, 153, 153, 153, 153, 
	153, 153, 153, 153, 153, 153, 153, 153, 153, 153, 
	153, 153, 153, 153, 153, 153, 152, 152, 152, 152, 
	152, 152, 152, 152, 152, 152, 152, 152, 151, 151, 
	151, 151, 151, 151, 151, 151, 0, 0, 0, 0, 
	0, 0, 0, 0, 110, 110, 110, 110, 110, 110, 
	110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 
	110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 
	110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 
	110, 110, 0, 0, 156, 156, 156, 156, 156, 156, 
	156, 156, 156, 156, 156, 156, 156, 156, 156, 156, 
	156, 156, 156, 156, 155, 155, 155, 155, 155, 155, 
	155, 154, 154, 154, 154, 154, 154, 153, 153, 153, 
	153, 153, 153, 153, 152, 152, 152, 152, 152, 152, 
	152, 151, 151, 151, 151, 151, 151, 151, 150, 150, 
	150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 
	150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 
	150, 150, 150, 150, 150, 149, 149, 149, 149, 149, 
	149, 149, 149, 149, 148, 148, 148, 148, 148, 148, 
	0, 0, 0, 0, 0, 0, 0, 0, 109, 109, 
	109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
	109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
	109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
	109, 109, 109, 109, 109, 109, 0, 0, 155, 155, 
	155, 155, 155, 155, 155, 155, 155, 155, 155, 155, 
	155, 155, 155, 155, 155, 155, 155, 154, 154, 154, 
	154, 154, 154, 153, 153, 153, 153, 153, 152, 152, 
	152, 152, 152, 151, 151, 151, 151, 151, 151, 150, 
	150, 150, 150, 150, 149, 149, 149, 149, 149, 149, 
	148, 148, 148, 148, 148, 148, 148, 148, 148, 148, 
	148, 148, 148, 148, 148, 148, 148, 148, 148, 148, 
	148, 148, 148, 148, 147, 147, 147, 147, 147, 147, 
	147, 146, 146, 146, 146, 146, 146, 146, 146, 145, 
	145, 145, 145, 145, 0, 0, 0, 0, 0, 0, 
	0, 0, 109, 109, 109, 109, 109, 109, 109, 109, 
	109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
	109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
	109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
	0, 0, 154, 154, 154, 154, 154, 154, 154, 154, 
	154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 
	154, 153, 153, 153, 153, 152, 152, 152, 152, 152, 
	151, 151, 151, 151, 150, 150, 150, 150, 150, 149, 
	149, 149, 149, 148, 148, 148, 148, 148, 147, 147, 
	147, 147, 147, 146, 146, 146, 146, 146, 146, 146, 
	146, 146, 146, 146, 146, 146, 146, 146, 146, 146, 
	146, 146, 146, 146, 146, 145, 145, 145, 145, 145, 
	145, 144, 144, 144, 144, 144, 144, 143, 143, 143, 
	143, 143, 143, 142, 142, 142, 142, 142, 0, 0, 
	0, 0, 0, 0, 0, 0, 108, 108, 108, 108, 
	108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 
	108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 
	108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 
	108, 108, 108, 108, 0, 0, 153, 153, 153, 153, 
	153, 153, 153, 153, 153, 153, 153, 153, 153, 153, 
	153, 153, 153, 153, 153, 152, 152, 152, 152, 151, 
	151, 151, 150, 150, 150, 150, 149, 149, 149, 149, 
	148, 148, 148, 148, 147, 147, 147, 147, 146, 146, 
	146, 146, 145, 145, 145, 145, 144, 144, 144, 143, 
	143, 143, 143, 143, 143, 143, 143, 143, 143, 143, 
	143, 143, 143, 143, 143, 143, 143, 143, 143, 143, 
	143, 143, 142, 142, 142, 142, 142, 141, 141, 141, 
	141, 141, 140, 140, 140, 140, 140, 140, 139, 139, 
	139, 139, 0, 0, 0, 0, 0, 0, 0, 0, 
	108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 
	108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 
	108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 
	108, 108, 108, 108, 108, 108, 108, 108, 0, 0, 
	152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 
	152, 152, 152, 152, 152, 152, 152, 152, 152, 151, 
	151, 151, 150, 150, 150, 149, 149, 149, 148, 148, 
	148, 148, 147, 147, 147, 146, 146, 146, 145, 145, 
	145, 145, 144, 144, 144, 143, 143, 143, 143, 142, 
	142, 142, 141, 141, 141, 141, 141, 141, 141, 141, 
	141, 141, 141, 141, 141, 141, 141, 141, 141, 141, 
	141, 141, 141, 141, 140, 140, 140, 140, 139, 139, 
	139, 139, 139, 138, 138, 138, 138, 137, 137, 137, 
	137, 137, 136, 136, 136, 136, 0, 0, 0, 0, 
	0, 0, 0, 0, 109, 109, 109, 109, 109, 109, 
	109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
	109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
	109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
	109, 109, 0, 0, 151, 151, 151, 151, 151, 151, 
	151, 151, 151, 151, 151, 151, 151, 151, 151, 151, 
	151, 151, 150, 150, 150, 149, 149, 149, 148, 148, 
	148, 147, 147, 147, 146, 146, 146, 145, 145, 145, 
	144, 144, 144, 143, 143, 143, 142, 142, 142, 141, 
	141, 141, 140, 140, 140, 139, 139, 139, 139, 139, 
	139, 139, 139, 139, 139, 139, 139, 139, 139, 139, 
	139, 139, 139, 139, 139, 139, 138, 138, 138, 138, 
	137, 137, 137, 137, 136, 136, 136, 136, 135, 135, 
	135, 135, 134, 134, 134, 134, 133, 133, 133, 133, 
	0, 0, 0, 0, 0, 0, 0, 0, 109, 109, 
	109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
	109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
	109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
	109, 109, 109, 109, 109, 109, 0, 0, 150, 150, 
	150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 
	150, 150, 150, 150, 150, 150, 149, 149, 149, 148, 
	148, 147, 147, 147, 146, 146, 146, 145, 145, 144, 
	144, 144, 143, 143, 143, 142, 142, 141, 141, 141, 
	140, 140, 140, 139, 139, 139, 138, 138, 138, 137, 
	137, 136, 136, 136, 136, 136, 136, 136, 136, 136, 
	136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 
	136, 136, 135, 135, 135, 135, 134, 134, 134, 134, 
	133, 133, 133, 132, 132, 132, 132, 131, 131, 131, 
	130, 130, 130, 130, 0, 0, 0, 0, 0, 0, 
	0, 0, 110, 110, 110, 110, 110, 110, 110, 110, 
	110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 
	110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 
	110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 
	0, 0, 149, 149, 149, 149, 149, 149, 149, 149, 
	149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 
	148, 148, 147, 147, 147, 146, 146, 145, 145, 145, 
	144, 144, 143, 143, 142, 142, 142, 141, 141, 140, 
	140, 140, 139, 139, 138, 138, 138, 137, 137, 136, 
	136, 136, 135, 135, 134, 134, 134, 134, 134, 134, 
	134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 
	134, 134, 134, 134, 134, 133, 133, 133, 132, 132, 
	132, 131, 131, 131, 131, 130, 130, 130, 129, 129, 
	129, 128, 128, 128, 127, 127, 127, 127, 0, 0, 
	0, 0, 0, 0, 0, 0, 111, 111, 111, 111, 
	111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 
	111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 
	111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 
	111, 111, 111, 111, 0, 0, 148, 148, 148, 148, 
	148, 148, 148, 148, 148, 148, 148, 148, 148, 148, 
	148, 148, 148, 148, 147, 147, 146, 146, 145, 145, 
	145, 144, 144, 143, 143, 142, 142, 141, 141, 140, 
	140, 140, 139, 139, 138, 138, 137, 137, 136, 136, 
	136, 135, 135, 134, 134, 133, 133, 133, 132, 132, 
	131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 
	131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 
	130, 130, 130, 130, 129, 129, 129, 128, 128, 128, 
	127, 127, 127, 126, 126, 126, 125, 125, 125, 124, 
	124, 124, 0, 0, 0, 0, 0, 0, 0, 0, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 0, 0, 
	147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 
	147, 147, 147, 147, 147, 147, 147, 147, 146, 146, 
	145, 145, 144, 144, 143, 143, 142, 142, 141, 141, 
	140, 140, 139, 139, 138, 138, 137, 137, 136, 136, 
	135, 135, 135, 134, 134, 133, 133, 132, 132, 131, 
	131, 130, 130, 129, 129, 129, 129, 129, 129, 129, 
	129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 
	129, 129, 129, 128, 128, 128, 127, 127, 127, 126, 
	126, 126, 125, 125, 124, 124, 124, 123, 123, 123, 
	122, 122, 122, 121, 121, 120, 0, 0, 0, 0, 
	0, 0, 0, 0, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 0, 0, 146, 146, 146, 146, 146, 146, 
	146, 146, 146, 146, 146, 146, 146, 146, 146, 146, 
	146, 146, 145, 145, 144, 144, 143, 142, 142, 141, 
	141, 140, 140, 139, 139, 138, 138, 137, 137, 136, 
	136, 135, 135, 134, 134, 133, 133, 132, 132, 131, 
	131, 130, 130, 129, 129, 128, 127, 127, 127, 127, 
	127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 
	127, 127, 127, 127, 127, 127, 126, 126, 126, 125, 
	125, 124, 124, 124, 123, 123, 123, 122, 122, 121, 
	121, 121, 120, 120, 119, 119, 119, 118, 118, 117, 
	0, 0, 0, 0, 0, 0, 0, 0, 113, 113, 
	113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 
	113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 
	113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 
	113, 113, 113, 113, 113, 113, 0, 0, 145, 145, 
	145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 
	145, 145, 145, 145, 145, 145, 144, 143, 143, 142, 
	142, 141, 141, 140, 140, 139, 138, 138, 137, 137, 
	136, 136, 135, 134, 134, 133, 133, 132, 132, 131, 
	131, 130, 130, 129, 128, 128, 127, 127, 126, 126, 
	125, 125, 124, 124, 124, 124, 124, 124, 124, 124, 
	124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 
	124, 123, 123, 123, 122, 122, 121, 121, 121, 120, 
	120, 119, 119, 119, 118, 118, 117, 117, 117, 116, 
	116, 115, 115, 114, 0, 0, 0, 0, 0, 0, 
	0, 0, 114, 114, 114, 114, 114, 114, 114, 114, 
	114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 
	114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 
	114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 
	0, 0, 144, 144, 144, 144, 144, 144, 144, 144, 
	144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 
	143, 142, 142, 141, 141, 140, 139, 139, 138, 138, 
	137, 136, 136, 135, 135, 134, 133, 133, 132, 132, 
	131, 130, 130, 129, 129, 128, 127, 127, 126, 126, 
	125, 125, 124, 123, 123, 122, 122, 122, 122, 122, 
	122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 
	122, 122, 122, 122, 121, 121, 121, 120, 120, 119, 
	119, 118, 118, 118, 117, 117, 116, 116, 115, 115, 
	115, 114, 114, 113, 113, 112, 112, 111, 0, 0, 
	0, 0, 0, 0, 0, 0, 115, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 
	115, 115, 115, 115, 0, 0, 143, 143, 143, 143, 
	143, 143, 143, 143, 143, 143, 143, 143, 143, 143, 
	143, 143, 143, 143, 142, 141, 141, 140, 139, 139, 
	138, 137, 137, 136, 135, 135, 134, 134, 133, 132, 
	132, 131, 130, 130, 129, 129, 128, 127, 127, 126, 
	125, 125, 124, 124, 123, 122, 122, 121, 121, 120, 
	119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 
	119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 
	118, 118, 117, 117, 116, 116, 115, 115, 114, 114, 
	114, 113, 113, 112, 112, 111, 111, 110, 110, 109, 
	109, 108, 0, 0, 0, 0, 0, 0, 0, 0, 
	115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 115, 115, 0, 0, 
	143, 143, 143, 143, 143, 143, 143, 143, 143, 143, 
	143, 143, 143, 143, 143, 143, 142, 142, 141, 140, 
	140, 139, 138, 137, 137, 136, 135, 135, 134, 133, 
	133, 132, 131, 131, 130, 129, 129, 128, 127, 127, 
	126, 125, 125, 124, 123, 123, 122, 121, 121, 120, 
	120, 119, 118, 118, 117, 117, 117, 117, 117, 117, 
	117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 
	117, 117, 117, 116, 116, 115, 115, 114, 114, 113, 
	113, 112, 112, 111, 111, 110, 110, 109, 109, 108, 
	108, 107, 107, 106, 106, 105, 0, 0, 0, 0, 
	0, 0, 0, 0, 116, 116, 116, 116, 116, 116, 
	116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 
	116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 
	116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 
	116, 116, 0, 0, 142, 142, 142, 142, 142, 142, 
	142, 142, 142, 142, 142, 142, 142, 142, 142, 142, 
	141, 141, 140, 139, 138, 138, 137, 136, 135, 135, 
	134, 133, 133, 132, 131, 130, 130, 129, 128, 128, 
	127, 126, 126, 125, 124, 123, 123, 122, 121, 121, 
	120, 119, 119, 118, 117, 117, 116, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 114, 114, 113, 113, 
	112, 112, 111, 111, 110, 110, 109, 109, 108, 108, 
	107, 107, 106, 105, 105, 104, 104, 103, 103, 102, 
	0, 0, 0, 0, 0, 0, 0, 0, 117, 117, 
	117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 
	117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 
	117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 
	117, 117, 117, 117, 117, 117, 0, 0, 141, 141, 
	141, 141, 141, 141, 141, 141, 141, 141, 141, 141, 
	141, 141, 141, 141, 140, 140, 139, 138, 137, 136, 
	136, 135, 134, 133, 133, 132, 131, 130, 130, 129, 
	128, 127, 127, 126, 125, 124, 124, 123, 122, 122, 
	121, 120, 119, 119, 118, 117, 116, 116, 115, 114, 
	114, 113, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 111, 111, 110, 110, 109, 109, 108, 108, 107, 
	106, 106, 105, 105, 104, 104, 103, 103, 102, 101, 
	101, 100, 100, 99, 0, 0, 0, 0, 0, 0, 
	0, 0, 117, 117, 117, 117, 117, 117, 117, 117, 
	117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 
	117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 
	117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 
	0, 0, 140, 140, 140, 140, 140, 140, 140, 140, 
	140, 140, 140, 140, 140, 140, 140, 140, 139, 138, 
	138, 137, 136, 135, 135, 134, 133, 132, 131, 131, 
	130, 129, 128, 127, 127, 126, 125, 124, 123, 123, 
	122, 121, 120, 120, 119, 118, 117, 117, 116, 115, 
	114, 114, 113, 112, 111, 110, 110, 110, 110, 110, 
	110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 
	110, 110, 110, 110, 109, 109, 108, 108, 107, 107, 
	106, 105, 105, 104, 104, 103, 103, 102, 101, 101, 
	100, 100, 99, 99, 98, 97, 97, 96, 0, 0, 
	0, 0, 0, 0, 0, 0, 117, 117, 117, 117, 
	117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 
	117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 
	117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 
	117, 117, 117, 117, 0, 0, 139, 139, 139, 139, 
	139, 139, 139, 139, 139, 139, 139, 139, 139, 139, 
	139, 139, 138, 137, 137, 136, 135, 134, 133, 132, 
	132, 131, 130, 129, 128, 127, 127, 126, 125, 124, 
	123, 122, 122, 121, 120, 119, 118, 118, 117, 116, 
	115, 114, 114, 113, 112, 111, 111, 110, 109, 108, 
	107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 
	107, 107, 107, 107, 107, 107, 107, 107, 107, 106, 
	106, 105, 105, 104, 103, 103, 102, 102, 101, 101, 
	100, 99, 99, 98, 97, 97, 96, 96, 95, 94, 
	94, 93, 0, 0, 0, 0, 0, 0, 0, 0, 
	116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 
	116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 
	116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 
	116, 116, 116, 116, 116, 116, 116, 116, 0, 0, 
	138, 138, 138, 138, 138, 138, 138, 138, 138, 138, 
	138, 138, 138, 138, 138, 138, 137, 136, 136, 135, 
	134, 133, 132, 131, 130, 129, 129, 128, 127, 126, 
	125, 124, 123, 122, 122, 121, 120, 119, 118, 117, 
	117, 116, 115, 114, 113, 112, 112, 111, 110, 109, 
	108, 107, 107, 106, 105, 105, 105, 105, 105, 105, 
	105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 
	105, 105, 105, 104, 103, 103, 102, 102, 101, 100, 
	100, 99, 98, 98, 97, 97, 96, 95, 95, 94, 
	93, 93, 92, 91, 91, 90, 0, 0, 0, 0, 
	0, 0, 0, 0, 115, 115, 115, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 
	115, 115, 0, 0, 137, 137, 137, 137, 137, 137, 
	137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 
	136, 135, 135, 134, 133, 132, 131, 130, 129, 128, 
	127, 126, 125, 124, 124, 123, 122, 121, 120, 119, 
	118, 117, 116, 116, 115, 114, 113, 112, 111, 110, 
	109, 109, 108, 107, 106, 105, 104, 103, 103, 103, 
	103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 
	103, 103, 103, 103, 103, 103, 102, 102, 101, 100, 
	100, 99, 98, 98, 97, 96, 96, 95, 94, 94, 
	93, 92, 92, 91, 90, 90, 89, 88, 88, 87, 
	0, 0, 0, 0, 0, 0, 0, 0, 115, 115, 
	115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 
	115, 115, 115, 115, 115, 115, 0, 0, 136, 136, 
	136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 
	136, 136, 136, 136, 135, 134, 133, 132, 132, 131, 
	130, 129, 128, 127, 126, 125, 124, 123, 122, 121, 
	120, 119, 118, 117, 116, 116, 115, 114, 113, 112, 
	111, 110, 109, 108, 107, 106, 106, 105, 104, 103, 
	102, 101, 100, 100, 100, 100, 100, 100, 100, 100, 
	100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 
	100, 99, 98, 98, 97, 96, 96, 95, 94, 94, 
	93, 92, 92, 91, 90, 90, 89, 88, 88, 87, 
	86, 85, 85, 84, 0, 0, 0, 0, 0, 0, 
	0, 0, 114, 114, 114, 114, 114, 114, 114, 114, 
	114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 
	114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 
	114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 
	0, 0, 135, 135, 135, 135, 135, 135, 135, 135, 
	135, 135, 135, 135, 135, 135, 135, 135, 134, 133, 
	132, 131, 130, 129, 128, 127, 126, 125, 124, 123, 
	123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 
	113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 
	103, 102, 102, 101, 100, 99, 98, 98, 98, 98, 
	98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 
	98, 98, 98, 98, 97, 97, 96, 95, 95, 94, 
	93, 93, 92, 91, 90, 90, 89, 88, 88, 87, 
	86, 85, 85, 84, 83, 82, 82, 81, 0, 0, 
	0, 0, 0, 0, 0, 0, 114, 114, 114, 114, 
	114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 
	114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 
	114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 
	114, 114, 114, 114, 0, 0, 134, 134, 134, 134, 
	134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 
	134, 134, 133, 132, 131, 130, 129, 128, 127, 126, 
	125, 124, 123, 122, 121, 120, 119, 118, 117, 116, 
	115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 
	105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 
	96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 
	96, 96, 96, 96, 96, 96, 96, 96, 95, 94, 
	94, 93, 92, 91, 91, 90, 89, 88, 88, 87, 
	86, 85, 85, 84, 83, 82, 82, 81, 80, 79, 
	79, 78, 0, 0, 0, 0, 0, 0, 0, 0, 
	113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 
	113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 
	113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 
	113, 113, 113, 113, 113, 113, 113, 113, 0, 0, 
	133, 133, 133, 133, 133, 133, 133, 133, 133, 133, 
	133, 133, 133, 133, 133, 133, 132, 131, 130, 129, 
	128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 
	118, 116, 115, 114, 113, 112, 111, 110, 109, 108, 
	107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 
	97, 96, 95, 94, 93, 93, 93, 93, 93, 93, 
	93, 93, 93, 93, 93, 93, 93, 93, 93, 93, 
	93, 93, 93, 92, 91, 90, 90, 89, 88, 87, 
	87, 86, 85, 84, 84, 83, 82, 81, 80, 80, 
	79, 78, 77, 76, 76, 75, 0, 0, 0, 0, 
	0, 0, 0, 0, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 0, 0, 132, 132, 132, 132, 132, 132, 
	132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 
	131, 130, 129, 128, 127, 126, 125, 124, 123, 121, 
	120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 
	109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 
	99, 98, 97, 96, 95, 94, 93, 92, 91, 91, 
	91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 
	91, 91, 91, 91, 91, 91, 90, 89, 89, 88, 
	87, 86, 86, 85, 84, 83, 82, 82, 81, 80, 
	79, 78, 78, 77, 76, 75, 74, 73, 73, 72, 
	0, 0, 0, 0, 0, 0, 0, 0, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 
	112, 112, 112, 112, 112, 112, 0, 0, 131, 131, 
	131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 
	131, 131, 131, 131, 130, 129, 128, 127, 126, 125, 
	124, 122, 121, 120, 119, 118, 117, 116, 114, 113, 
	112, 111, 110, 109, 108, 107, 106, 104, 103, 102, 
	101, 100, 99, 98, 97, 96, 95, 94, 93, 91, 
	90, 89, 88, 88, 88, 88, 88, 88, 88, 88, 
	88, 88, 88, 88, 88, 88, 88, 88, 88, 88, 
	88, 87, 86, 85, 85, 84, 83, 82, 81, 81, 
	80, 79, 78, 77, 76, 76, 75, 74, 73, 72, 
	71, 70, 70, 69, 
};

/**/