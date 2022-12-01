#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<iostream>
int gd= DETECT, gm;
int n,xs[100],ys[100],i,ty,tx;

void draw();
void translate();
using namespace std;
int main(){
 	cout<<"Enter no. of sides in polygon: ";
 	cin>>n;
 	cout<<"Enter coordinates x, y for each vertex: ";
 	for(i=0;i<n;i++){
 		cin>>xs[i]>>ys[i];}
 	cout<<"Enter distances for translation (in x and y directions): ";
 	cin>>tx>>ty;
 	initgraph(&gd, &gm, (char*)"");
 	cleardevice();
 	setcolor(RED);
 	draw();
 	translate();
 	setcolor(YELLOW);
 	draw();
 	getch();
 	closegraph();
 	return 0;
 }
void draw(){
	for(i=0; i<n; i++){
		line(xs[i],ys[i],xs[(i+1)%n],ys[(i+1)%n]);}
	}
	
void translate(){
	for(i=0; i<n; i++){
		xs[i]+=tx;
		ys[i]+=ty;
		}
	} 
