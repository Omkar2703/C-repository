#include<stdio.h>
int main()
{
	int i, n, max, a[10];
	printf("\nEnter n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("\nEnter the numbers:");
		scanf("%d",&a[i]);
	}
	max=a[i];
	for(i=1;i<=n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("\nLargest number from the given number is %d",max);
	return 0;
}
