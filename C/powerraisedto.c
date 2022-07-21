#include<stdio.h>
int power(int x, int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return x*power(x,n-1);
	}
}
int main()
{
	int x, n, P;
	printf("\nEnter the base number:");
	scanf("%d",&x);
	printf("\nEnter the raise to number:");
	scanf("%d",&n);
	P=power(x,n);
	printf("\nAnswer= %d",P);
	return 0;
}
