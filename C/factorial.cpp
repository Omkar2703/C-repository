#include<stdio.h>
int main()
{
	int n, i, f=1;
	printf("\nEnter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("\nFactorial of the given number is %d",f);
	return 0;
}
