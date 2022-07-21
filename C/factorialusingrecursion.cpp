#include<stdio.h>
int fact(int n)
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int n, f;
	printf("\nEnter the number:");
	scanf("%d",&n);
	f=fact(n);
	printf("\nFactorial of the given number is %d",f);
	return 0;
}
