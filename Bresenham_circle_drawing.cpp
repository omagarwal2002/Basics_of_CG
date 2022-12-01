#include <graphics.h>
#include <conio.h>
#include<math.h>
#include <iostream>
using namespace std;

int main(){
   int h,k,r=150;
   void plotPixel(int, int, int, int);
   cout<<"\n \tBresenham's Circle \n";
   cout<<"\n Enter Center Coordinates of Circle:";
   cin>>h>>k;
   
   int x=0,y=r,d=3-2*r;
   
   int gd= DETECT, gm;
   initgraph(&gd, &gm, (char *)"");
   
   while(x<=y)
  {
    plotPixel(x,y,h,k);
    if(d<0){
        d=d+4*x+6;
    }
    else{
        d=d+4*x-4*y+10;
        y--;
    }
    x++;
   }
getch();
closegraph();
return 0;

}
void plotPixel(int x, int y, int h, int k){
   putpixel(x+h, y+k, WHITE);
   putpixel(x+h, -y+k, WHITE);
   putpixel(-x+h, -y+k, WHITE);
   putpixel(-x+h, y+k, WHITE);
   putpixel(y+h, x+k, WHITE);
   putpixel(y+h, -x+k, WHITE);
   putpixel(-y+h, -x+k, WHITE);
   putpixel(-y+h, x+k, WHITE);
   delay(50);

}

