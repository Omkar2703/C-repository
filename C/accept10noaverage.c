#include<stdio.h>
int main()
{
	int i, a[10], s=0;
	float average;
	for(i=0;i<10;i++)
	{
		printf("\nEnter the numbers:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\nAverage is..\n");
	for(i=0;i<10;i++)
	{
		s=s+a[i];
	}
	average=s/10.0;
	printf("\nAverage is %f",average);
	return 0;
}
