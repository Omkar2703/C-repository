#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void bfill(int x, int y, int j, int k)
{
	if((getpixel(x, y)!=j)&&(getpixel(x, y)!=k))
	{
		putpixel(x, y, k);
		delay(10);
		bfill(x, y-1, j, k);
		bfill(x+1, y, j, k);
		bfill(x, y+1, j, k);
		bfill(x-1, y, j, k);
	}
}
int main()
{
	int gd, gm, n, i, x, y, a[10][2], x0, y0, x1, y1, j, k;
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
	printf("\nEnter boundary colour:");
	scanf("%d", &j);
	printf("\nEnter fill colour:");
	scanf("%d", &k);
	for(i=0; i<n; i++)
	{
		x0 = a[i][0];
		y0 = a[i][1];
		x1 = a[(i+1)%n][0];
		y1 = a[(i+1)%n][1]; 
		setcolour(j);
		line(x0, y0, x1, y1);
	}
	printf("\nEnter the seedpixel x, y:");
	scanf("%d%d", &x, &y);
	bfill(x, y, j, k);
	getch();
}
