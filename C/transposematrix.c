#include<stdio.h>
int main()
{
	int a[10][10], b[10][10], i, j, m, n;
	printf("\nEnter the number of rows and collumns:");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter the numbers:");
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
			b[j][i]=a[i][j];
		}
	}
	printf("\nTranspose matrix is..\n ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%2d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
