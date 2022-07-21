#include<stdio.h>
int fib(int k)
{
	if(k==1||k==2)
	{
		return 1;
	}
	else
	{
		return fib(k-1)+fib(k-2);
	}
}
int main()
{
	int n, i, z;
	printf("\nEnter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	z=fib(i);
	printf("\t%d",z);
}
return 0;
}
