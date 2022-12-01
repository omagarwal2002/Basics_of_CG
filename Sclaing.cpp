#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<math.h>
int gd= DETECT, gm;
int n,x[100],y[100],i;
float sfx, sfy;

void draw();
void scale();
using namespace std;
int main(){
 	cout<<"Enter no. of sides in polygon: ";
 	cin>>n;
 	cout<<"Enter coordinates x, y for each vertex: ";
 	for(i=0;i<n;i++){
 		cin>>x[i]>>y[i];}
 	cout<<"Enter scale factors: sfx nad sfy : ";
 	cin>>sfx>>sfy;
	initgraph(&gd, &gm, (char*)"");
 	cleardevice();
 	setcolor(RED);
 	draw();
 	scale();
 	setcolor(YELLOW);
 	draw();
 	getch();
 	closegraph();
 	return 0;
 }
void draw(){
	for(i=0; i<n; i++){
		line(x[i],y[i],x[(i+1)%n],y[(i+1)%n]);}
	}
	
void scale(){
	for(i=0; i<n; i++){
		x[i]=x[0]+(int)((float)(x[i]-x[0])*sfx);
		y[i]=y[0]+(int)((float)(y[i]-y[0])*sfx);
		}
	} 
