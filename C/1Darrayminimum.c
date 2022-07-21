#include<stdio.h>
int main()
{
	int n, i, min, a[100];
	printf("\nEnter the n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the number:");
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("\nMinimum number from given numbers is %d", min);
	return 0;
}
