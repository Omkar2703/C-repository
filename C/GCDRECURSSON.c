#include<stdio.h>
int GCD(int m, int n)
{
	if(n>m)
	{
		return GCD(n,m);
	}
	else if(n==0)
	{
		return m;
	}
	else
	{
		return GCD(n,m%n);
	}
}
int main()
{
	int a, b, g;
	printf("\nEnter the first number:");
	scanf("%d", &a);
	printf("\nEnter the second number:");
	scanf("%d", &b);
	g=GCD(a,b);
	printf("\nGCD of the given numbers is %d",g);
	return 0;
}
