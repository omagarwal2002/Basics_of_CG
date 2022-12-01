#include <graphics.h>
#include<math.h>

void line_at_angle(int x, int y, int length, int angle){
	double rad= (double)angle*M_PI/100.0;
	line(x,y, x=length*cos(rad), y=length*sin(rad));
}
int main(){
int gd= DETECT, gm;
initgraph(&gd, &gm, (char *)"");

line(20,150,200,300);
line(100,150,100,300);
line(200,150,400,150);
line_at_angle(100,300,200,45);
lineto(300,250);
lineto(400,300);
getch();
closegraph();
return 0;
}

