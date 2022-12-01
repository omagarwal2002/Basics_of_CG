#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include <iostream>

using namespace std;

void drawline(int x0, int y0, int x1, int y1){
	int dx= x1-x0;
	int dy= y1-y0;
	
	int x=x0;
	int y=y0;
	
	int p=2*dy-dx;
	while(x<x1){
	if(p>=0){
		putpixel(x,y,7);
		y=y+1;
		p=p+2*dy-2*dx;
	}
	else{
		putpixel(x,y,7);
		p=p+2*dy;
	}
	x=x+1;
	delay(20);
}
getch();
}
//using namespace std;
int main(){
	
	int gd=DETECT, gm, error, x0, y0, x1, y1;
	initgraph(&gd, &gm, (char*)"");
	
	cout << "Bresenham's line drawing algorithm\n";
	cout << "Enter Courdinates of first point: ";
	cin >>x0>>y0;
	cout << "Enter Courdinates of second point: ";
	cin >>x1>>y1;
	drawline(x0,y0,x1,y1);
	
	getch();
	closegraph();
	return 0;
}
