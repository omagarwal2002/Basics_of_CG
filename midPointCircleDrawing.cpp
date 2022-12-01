#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
using namespace std;

int main()
{
	int xc,yc,x,y,r,d;
	int gd=DETECT,gm;
	cout<<"enter the radius: ";
	cin>>r;
	x=0;
	y=r;
	d=1-r;
	
	initgraph(&gd,&gm,(char*)"");
	cout<<"enter the centre of circle: ";
	cin>>xc>>yc;

	do{
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		putpixel(xc+y,yc+x,WHITE);
		putpixel(xc+y,yc-x,WHITE);
		putpixel(xc-y,yc+x,WHITE);
		putpixel(xc-y,yc-x,WHITE);
		delay(50);
		if(d<0)
		{
			x=x+1;
			y=y;
			d=d+2*x+1;
			
		}
		else{
			x=x+1;
			y=y-1;
			d=d+2*(x-y)+1;
			}
	}while(x<y);
getch();
closegraph();
return 0;
		
	}


