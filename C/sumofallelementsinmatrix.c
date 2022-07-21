#include<stdio.h>
int main()
{
	int a[10][10], i, j, m, n, s=0;
	printf("\nEnter the number of rows and columns:");
	scanf("%d%d", &m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter the number:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%2d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			s=s+a[i][j];
		}
	}
	printf("\nSum of all element i the matrix:%d",s);
	return 0;
}
