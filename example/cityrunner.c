/*settings*{"name":"cityrunner","author":"corax","image":[51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,49,17,51,51,49,51,51,51,51,51,49,17,17,49,51,51,17,19,51,51,51,51,49,51,49,49,51,51,19,19,51,51,51,51,49,49,49,17,51,49,51,49,51,51,51,51,49,51,49,49,51,49,49,49,51,51,51,51,49,49,49,49,51,49,51,49,51,51,51,51,49,51,49,17,51,49,49,49,51,51,51,51,49,49,49,49,51,49,51,49,17,19,51,51,49,51,49,49,17,17,49,49,51,19,51,49,17,49,49,17,19,19,51,51,19,19,51,49,49,51,49,49,17,19,19,19,19,19,51,49,49,49,49,49,19,19,51,51,17,17,19,49,49,51,49,17,17,19,19,19,19,19,19,49,49,49,49,49,19,19,51,51,17,17,19]}*/
//16x16
char block0[] = {0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xa8,0xaa,0xa8,0xcc,0xc8,0x88,0x88,0xaa,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x8c,0x33,0x88,0xc3,0x38,0x8c,0x33,0x88,0x8c,0x33,0x88,0xc3,0x3a,0xac,0x33,0x88,0x8c,0x36,0x88,0xc3,0x68,0x8c,0x36,0x88,0x8c,0x63,0xaa,0xc6,0x38,0x8c,0x63,0x88,0x8c,0x33,0x88,0xc3,0x38,0x8c,0x33,0xa8,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0xaa,0xa8,0x88,0xaa,0xa8,0xaa,0xa8,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x8a,0xaa,0x8a,0xaa,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0xaa,0x8c,0xcc,0x88,0x88,0x8a,0xaa,0x8a};
char block1[] = {0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xa8,0xaa,0xa8,0x88,0x88,0x88,0x88,0xaa,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x8c,0x33,0x88,0xc3,0x38,0x8c,0x33,0x88,0x8c,0xbb,0x88,0xc3,0x3a,0xac,0xbb,0x88,0x8c,0xbb,0x88,0xc3,0x68,0x8c,0xbb,0x88,0x8c,0xbb,0x8a,0xc6,0x38,0x8c,0xbb,0x88,0x8c,0xbb,0x88,0xc3,0x38,0x8c,0xbb,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0xaa,0xa8,0x88,0xff,0xf8,0x88,0xaa,0xa8,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x8a,0xaa,0x8a,0xaa,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0xaa,0x8c,0xcc,0x88,0x88,0x88,0x88,0x8a};
char block2[] = {0xbb,0xbb,0xbb,0xbb,0xbb,0x44,0x44,0x44,0x88,0x88,0x88,0x88,0x8b,0x4a,0xaa,0xaa,0xbb,0xbb,0xbb,0xbb,0xbb,0x44,0x44,0x44,0xa8,0xaa,0xa8,0xcc,0xc8,0x4a,0xaa,0xaa,0x88,0x88,0x88,0x88,0x88,0x4a,0xaa,0xaa,0x8c,0x33,0x88,0xc3,0x38,0x4a,0xaa,0xcc,0x8c,0x33,0x88,0xc3,0x3a,0x4a,0xaa,0xaa,0x8c,0x36,0x88,0xc3,0x68,0x4c,0xa2,0x2a,0x8c,0x63,0xaa,0xc6,0x38,0x4a,0xaa,0xaa,0x8c,0x33,0x88,0xc3,0x38,0x4a,0x22,0xa2,0x88,0x88,0x88,0x88,0x88,0x4a,0xaa,0xaa,0xaa,0xa8,0x88,0xff,0xf8,0x42,0xac,0xca,0x88,0x88,0x88,0x88,0x88,0x4a,0xaa,0xaa,0x88,0x8a,0xaa,0x8a,0xaa,0x4a,0xaa,0xaa,0x88,0x88,0x88,0x88,0x88,0x4a,0x22,0xaa,0xaa,0x8c,0xcc,0x88,0x88,0x4a,0xaa,0xaa};
char block3[] = {0x33,0xcf,0xcf,0xff,0xfc,0xfc,0xba,0x33,0x3c,0xfc,0xff,0xff,0xff,0xcf,0xcb,0xa3,0x3b,0xbb,0xbb,0xbb,0xbb,0xbb,0x99,0x93,0x3c,0xfc,0xff,0xff,0xff,0xcf,0xcb,0xa3,0x3f,0xcf,0xff,0xff,0xff,0xfc,0xba,0xa3,0x3c,0xfc,0xff,0xff,0xff,0xcf,0xcb,0xa3,0x3f,0xcf,0xff,0xff,0xff,0xfc,0xba,0xa3,0x3c,0xfc,0xff,0xff,0xff,0xcf,0xcb,0xa3,0x3b,0xbb,0xbb,0xbb,0xbb,0xbb,0x99,0x93,0x3c,0xfc,0xff,0xff,0xff,0xcf,0xcb,0xa3,0x33,0x93,0x93,0x33,0x33,0x33,0x93,0x93,0x33,0x9c,0xfb,0xb3,0x33,0x3b,0x94,0x93,0x33,0x93,0x9f,0xfb,0xbf,0xb4,0x93,0x93,0x33,0x93,0x93,0x3f,0xf4,0x43,0x93,0xa3,0x33,0x93,0x9f,0xfb,0xbf,0xb4,0x93,0xa3,0x33,0x9c,0xfb,0xb3,0x33,0x3b,0x94,0x93};
//16x16rle
char back0[] = {0x2,0x33,0x2,0x11,0x6,0x33,0x83,0x13,0x31,0x6,0x33,0x2,0x11,0x6,0x33,0x82,0x13,0x2,0x31,0x83,0x11,0x13,0x3,0x33,0x2,0x11,0x84,0x31,0x11,0x13,0x3,0x33,0x82,0x13,0x2,0x31,0x86,0x11,0x13,0x33,0x11,0x13,0x2,0x11,0x88,0x31,0x11,0x13,0x11,0x13,0x11,0x13,0x2,0x31,0x2,0x11,0x84,0x13,0x11,0x13,0x4,0x11,0x83,0x13,0x11,0x3,0x13,0x2,0x31,0x82,0x11,0x2,0x13,0x83,0x11,0x13,0x2,0x11,0x85,0x31,0x11,0x13,0x11,0x3,0x13,0x2,0x31,0x82,0x11,0x2,0x13,0x8,0x11,0x8,0x31,0x8,0x13,0x8,0x33};
char back1[] = {0x83,0x33,0x31,0x7,0x33,0x82,0x31,0x7,0x33,0x83,0x11,0x13,0x5,0x33,0x82,0x31,0x2,0x11,0x5,0x33,0x3,0x31,0x83,0x11,0x13,0x2,0x11,0x83,0x33,0x31,0x2,0x11,0x82,0x33,0x2,0x13,0x84,0x31,0x33,0x11,0x3,0x31,0x2,0x11,0x3,0x31,0x2,0x11,0x9,0x31,0x2,0x11,0x2,0x31,0x4,0x11,0x3,0x31,0x82,0x11,0x4,0x31,0x2,0x11,0x84,0x31,0x33,0x31,0x2,0x11,0x4,0x31,0x82,0x33,0x8,0x11,0x8,0x31,0x8,0x13,0x8,0x33};
char back2[] = {0x8,0x38,0x89,0xf3,0x33,0xf3,0x33,0xf3,0x33,0xf3,0x33,0x8,0x3f,0x99,0xf3,0xff,0xf3,0xff,0xf3,0xff,0xf3,0xff,0xf2,0x2f,0xf2,0x2f,0xf2,0x2f,0xf2,0x2f,0xf2,0xff,0xf2,0xff,0xf2,0xff,0xf2,0xff,0x8,0xaa,0x82,0xa2,0x2,0xff,0x82,0xf2,0x3,0xff,0x85,0xfa,0xaf,0x2f,0xbf,0x2,0x2f,0x2,0xbf,0x83,0x2a,0xab,0x2,0xf2,0x89,0xfb,0xf2,0xfb,0xf2,0xfa,0xaf,0xbf,0x2f,0x2,0xbf,0x2,0x2f,0x8a,0xba,0xab,0xba,0xfa,0xbb,0xfb,0xba,0xbb,0xfa,0x2,0xab,0x84,0xbb,0xab,0xbb,0x2,0xab,0x83,0xba,0xaa,0x2,0xbb,0x2,0xba,0x82,0xbb,0x2,0xba,0x82,0xab,0x3,0xbb,0x82,0xab,0x2,0xbb,0x9,0xaa};
char back3[] = {0x8,0x66,0x2,0x61,0x5,0x66,0x82,0x61,0x3,0x16,0x3,0x66,0x2,0x16,0x3,0x61,0x2,0x66,0x3,0x61,0x3,0x11,0x2,0x16,0x7,0x11,0x82,0x61,0xb,0x11,0x2,0xf1,0x5,0x11,0x84,0x1f,0x3f,0x1f,0x4,0x11,0x84,0x1f,0xf3,0x3f,0x2,0xf1,0x2,0x11,0x2,0xf1,0x84,0xf3,0x33,0xff,0x4,0x1f,0x83,0xff,0x33,0x5,0xf1,0x82,0xff,0x2,0x33,0x83,0x13,0x3f,0x2,0x1f,0x85,0xff,0xf3,0x33,0x3f,0x2,0x33,0x2,0xff,0x85,0x33,0x31,0xff,0xf1,0x6,0x33,0x83,0x11,0x13,0x8,0x33};
char back4[] = {0x80,0x66};
//6x8
char spr0[] = {0x0,0xbb,0xb0,0x0,0xb7,0x0,0xc,0xcc,0x0,0x10,0xcc,0xf1,0x0,0x22,0x0,0x0,0x22,0xb0,0x2,0x0,0xb,0x20,0x0,0xb};
char spr1[] = {0x0,0xbb,0xb0,0x0,0xb7,0x0,0x0,0xcc,0x0,0x0,0xcc,0x0,0x1,0x22,0x10,0x0,0x22,0x0,0x0,0xd0,0x20,0xd,0x0,0x2};
char spr2[] = {0x0,0xbb,0xb0,0x0,0xb7,0x0,0x0,0xcc,0x0,0x0,0xcc,0x0,0x0,0x12,0x0,0x0,0x22,0x0,0x0,0x2d,0x0,0x0,0x2d,0x6};
int spr[] = {spr0, spr2, spr1, spr2};

int map[256];
int i,r,p,distance,maxdistance,cadr,game,key,prevkey,level;

void exitscreen(){
	game = 0;
	spritesetvalue(1, S_LIVES, 0);
}

void init(){
	level = 0;
	game = 1;
	distance = 0;
	getsprite(1, spr2);
	spritesetvalue(1, S_WIDTH, 6);
	spritesetvalue(1, S_SOLID, 1);
	spritesetvalue(1, S_GRAVITY, 4);
	spritesetvalue(1, S_ON_EXIT_SCREEN, exitscreen);
	loaddata("cityrunner", &maxdistance);
}

void nextLevel(){
	setbgcolor(3);
	clearscreen();
	for(i = 0; i < 128; i++){
		map[i] = 0;
		map[128 + i] = block0;
	}
	for(i = 0; i < 64; i++){
		r = 134 + random(120);
		if(map[r - 1] != 0 && map[r + 1] != 0)
			map[r] = 0;
	}
	for(i = 0; i < 32; i++){
		r = 20 + random(110);
		if(map[r + 128] != 0){
			if(random(3) == 1)
				map[r] = block3;
			else
				map[r] = block0;
			}
	}
	for(i = 0; i < 255; i++){
		if(map[i] == block0 && (map[i + 1] == 0 || map[i + 1] == block3)){
			map[i] = block2;
			i++;
		}
		else if(map[i] == block0 && random(3) == 1)
			map[i] = block1;
	}
	loadtile(map, 16, 16, 128, 2);
	drawtile(0, 80);
	for(i = 0; i < 8; i++){
		if(random(1))
			putimagerle(back0,i * 16, 50,16,16);
		else
			putimagerle(back1,i * 16, 50,16,16);
		putimagerle(back2,i * 16, 112,16,16);
		putimagerle(back3,i * 16, 16,16,16);
		putimagerle(back4,i * 16, 0,16,16);
	}	
	p = 0;
	level++;
	setbgcolor(6);
	gotoxy(1, 1);
	printf(" level %d     ", level);
	putsprite(1, 48, 86);
	spritesetvalue(1, S_SPEEDX, 0);
	while(getkey() == 0){}
	spritesetvalue(1, S_SPEEDX, 8);
	spritesetvalue(1, S_SPEEDY, 0);
	putsprite(1, 48, 86);
}

void main(){
while(1){
	init();
	nextLevel();
	while(game){
		scroll(2);
		p+=2;
		distance++;
		setbgcolor(6);
		gotoxy(1, 1);
		spritesetvalue(1, S_SPEEDX, 8);
		printf(" distance %d    ", distance);
		if(p > 1900)
			nextLevel();
		if(gettimer(0) == 0){
			settimer(0, 100);
			cadr++;
			if(cadr > 3)
				cadr = 0;
		}
		key = getkey();
		if(gettileinxy(spritegetvalue(1, S_X), spritegetvalue(1, S_Y) + 18)){
			if(key == KEY_A || key == KEY_B)
				spritesetvalue(1, S_SPEEDY, -25);
			getsprite(1, spr[cadr]);
		}
		else
			getsprite(1, spr[0]);
		if(key > 32){
			prevkey = key;
			spritesetvalue(1, S_SPEEDX, 0);
			gotoxy(1, 1);
			printf(" pause        ");
			while(key == 0 || key == prevkey){
				key = getkey();
			}
		}			
		setbgcolor(3);
		delayredraw();
	}
	gotoxy(1, 5);
	if(distance > maxdistance[0]){
		printf(" new");
		maxdistance = distance;
		savedata("cityrunner", &maxdistance, 2);
	}
	printf(" record %d ", maxdistance);
	settimer(0, 1000);
	while(gettimer(0)){}
	while(getkey() == 0){}
}
}
