#include<stdio.h>
void accept(int x[10][10], int m, int n)
{
	int i, j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter the numbers:");
			scanf("%d", &x[i][j]);
		}
	}
}
void display(int x[10][10], int m, int n)
{
	int i, j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%2d",x[i][j]);
		}
		printf("\n");
	}
	
}
void add(int a[10][10], int b[10][10], int c[10][10], int m, int n)
{
	int i, j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
int main()
{
	int a[10][10], b[10][10], c[10][10], m1, m2, n1, n2;
	printf("\nEnter the number of rows and columns in matrix 1:");
	scanf("%d%d",&m1, &n1);
	printf("\nEnter the number of rows and columnes in matrix 2:");
	scanf("%d%d",&m2, &n2);
	if(m1==m2&&n1==n2)
	{
		accept(a,m1,n1);
		accept(b,m2,n2);
		display(a,m1,n1);
		printf("\n\n\n");
		display(b,m2,n2);
		add(a,b,c,m1,n1);
		printf("\nAddition is\n");
		display(c,m1,n1);
	}
	else
	{
		printf("\nAddition od matrix is not possible..");
	}
	return 0;
}
