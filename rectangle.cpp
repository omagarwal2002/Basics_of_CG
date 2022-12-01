#include<graphics.h>

void square(int x, int y, int a){
	rectangle(x-a/2, y-a/2, x+a/2, y+a/2);
}
int main(){
	
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	
	rectangle(100,50,300,150);
	square(500,70,100);
	
	getch();
	closegraph();
	return 0;
}
