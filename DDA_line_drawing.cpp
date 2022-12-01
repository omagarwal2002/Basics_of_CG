#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

int main()
{
	int gd= DETECT, gm;
	int x1,y1,x2,y2,dx,dy,steps,x_inc,y_inc;
	initgraph(&gd, &gm, (char*)"");
	std::cout<<"enter values of x1 and y1\n";
	std::cin>>x1>>y1;
	std::cout<<"enter values of x2 and y2\n";
	std::cin>>x2>>y2;
	dx= x2-x1;
	dy= y2-y1;
	if(abs(dx)>abs(dy))
	steps = abs(dx);
	else
	steps= abs(dy);
	x_inc = dx/steps;
	y_inc = dy/steps;
	for(int i=0; i<steps; i++){
		putpixel(x1,y1,3);
		x1= x1+ x_inc;
		y1= y1+ y_inc;
		delay(50);
	}
	getch;
	closegraph();
	return 0;
}
