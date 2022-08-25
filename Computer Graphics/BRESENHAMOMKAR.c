/*Perfect*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void bresenham(int x1, int y1, int x2, int y2)
{
	int x, y, dx, dy, p, i=0;
	dx=x2-x1;
	dy=y2-y1;
	p=2*dy-dx;
	x=x1;
	y=y1;
	while(i<=dx)
	{
		if(p<0)
		{
			putpixel(x, y, WHITE);
			x = x + 1;
			p = p + 2*dy;
		}
		else
		{
			putpixel(x, y, RED);
			x = x + 1;
			y = y + 1;
			p = p + 2*dy -2*dx;
		}
		i++;
		delay(20);
	}
}

int main()
{
int gd, gm, x1, y1, x2, y2, p, i, x, y, dx, dy;
detectgraph(&gd, &gm);
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
printf("Enter the co-ordinates:");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
bresenham(x1, y1, x2, y2);
getch();
}
