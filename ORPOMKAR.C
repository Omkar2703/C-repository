#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void bfill(int x, int y)
{
	if((getpixel(x, y)!=WHITE)&&(getpixel(x, y)!=RED))
	{
		putpixel(x, y, RED);
		delay(10);
		bfill(x, y-1);
		bfill(x+1, y);
		bfill(x, y+1);
		bfill(x-1, y);
	}
}
int main()
{
	int gd, gm, n, i, x, y, a[10][2], x0, y0, x1, y1;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	printf("\nEnter the no of vertix of polygon:");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("\nEnter the co-ordinates of vertex:");
		scanf("%d%d", &a[i][0], &a[i][1]);
	}
	a[n][10] = a[0][0];
	a[n][1] = a[0][1];
	for(i=0; i<n; i++)
	{
		x0 = a[i][0];
		y0 = a[i][1];
		x1 = a[(i+1)%n][0];
		y1 = a[(i+1)%n][1];
		line(x0, y0, x1, y1);
	}
	printf("\nEnter the seedpixel x, y:");
	scanf("%d%d", &x, &y);
	bfill(x, y);
	getch();
}
