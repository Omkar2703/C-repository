#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
main()
{
    int gd, gm, i, j, n, TX, TY;
    int a[20][2], k;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter no of vertices of polyon:\n");
	scanf("%d",&n);


	for(i=0;i<n;i++)
	{
		printf("enter the vertex :");
		scanf("%d",&a[i][0]);
		scanf("%d",&a[i][1]);

	}
	printf("Enter the color code\n");
	scanf("%d",&k);

	for(j=0;j<n;j++)
	{
		setcolor(k);
		line(a[j][0],a[j][1],a[(j+1)%n][0],a[(j+1)%n][1]);
		delay(70);
	}
    printf("\nEnter Translation factor:");
    scanf("%d%d", &TX, &TY);
    printf("\nTranslated Polygon...\n");
    for(j=0;j<n;j++)
	{
		setcolor(k);
		line(a[j][0]+TX,a[j][1]+TY,a[(j+1)%n][0]+TX,a[(j+1)%n][1]+TY);
		delay(70);
	}
    getch();
}
