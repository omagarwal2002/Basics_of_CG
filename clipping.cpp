#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<iostream>
using namespace std;
int tlx,tly,brx,bry,px,py;  
void point_clip()  
{  
int wxmin,wymin,wxmax,wymax;  
wxmin=tlx;  
wxmax=brx;  
wymin=tly;  
wymax=bry;  
if(px>=wxmin&&px<=wxmax)  
if(py>=wymin&&py<=wymax)  
putpixel(px,py,WHITE);  
getch();  
closegraph();  
}  
int main()  
{   
int gd=DETECT,gm,xc,yc,r;    
cout<<"Enter the top left coordinate";  
cin>>tlx>>tly;  
cout<<"Enter the bottom right coordinate";  
cin>>brx>>bry;  
cout<<"\n Enter the point";  
cin>>px>>py;  
initgraph(&gd,&gm,(char*)"");    
setcolor(WHITE);  
rectangle(tlx,tly,brx,bry);  
point_clip(); 
return 0; 
}
