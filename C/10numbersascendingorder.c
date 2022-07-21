#include<stdio.h>
int main()
{
	int i, j, a[10], temp;
	for(i=0;i<10;i++)
	{
		printf("\nEnter the numbers:");
		scanf("%d", &a[i]);
	}
	printf("\nBefore sorting..\n");
	for(i=0;i<10;i++)
	{
		printf("%2d", a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nAfter sorting..\n");
	for(i=0;i<10;i++)
	{
		printf("%2d",a[i]);
	}
	return 0;
}
