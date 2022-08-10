#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
void dda(int x1, int x2, int y1, int y2)
{
int i, dx, dy, steps;
float x, y;
float xinc, yinc;
dx = (x2 - x1);
dy = (y2 - y1);
if(abs(dx)>=abs(dy))
{
steps=dx;
}
else
{
steps = dy;
}
xinc=(float)dx/steps;
x=x1;
y=y1;
putpixel(x, y, WHITE);
for(i=1;i<steps;i++)
{
x=x+xinc;
y=y+yinc;
x1=x+0.5;
y1=y+0.5;
putpixel(x1,y1,WHITE);
}
}
void main()
{
int gd, gm;
detectgraph(&gd,&gm);
int x1, x2, y1, y2;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cleardevice();
cout<<"DDA Line genration algorithm";
cout<<"\nEnter the starting co-ordinates for drawing line:";
cin>>x1>>y1;
cout<<"Enter the ending co-rdinates:";
cin>>x2>>y2;
dda(x1,y1,x2,y2);
delay(50);
cout<<"\nThank you";
}
