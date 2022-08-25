/*Perfect*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void DDA(int x1, int y1, int x2, int y2)
{
float x, y, dx, dy, xin, yin;
int i, step;
dx=x2-x1;
dy=y2-y1;
x=x1;
y=y1;
putpixel(x, y, 15);
if(abs(dx)>=abs(dy))
{
step = abs(dx);
}
else
{
step = abs(dy);
}
xin=dx/step;
yin=dy/step;
for(i=1;i<=step;i++)
{
x=x+xin;
y=y+yin;
putpixel(x, y, 15);
delay(50);
}
}

void Thick(int x1, int y1, int x2, int y2, int z)
{
	int i;
	if(z%2==1)
	{
		DDA(x1, y1, x2, y2);
		for(i=1;i<=z/2;i++)
		{
			setcolor(RED);
			DDA(x1, y1-i, x2, y2-i);
			DDA(x1, y1+i, x2, y2+i);
		}
	}
	else
	{
		DDA(x1, y1, x2, y2);
		for(i=1;i<=(z-1);i++)
		{
			setcolor(RED);
			DDA(x1, y1-i, x2, y2-i);
		}
	}
}

int main()
{
int gd, gm, x1, y1, x2, y2, z;
detectgraph(&gd, &gm);
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
printf("Enter the co-ordinates:");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
printf("\nEnter the thickness:");
scanf("%d", &z);
Thick(x1, y1, x2, y2, z);
getch();
}
