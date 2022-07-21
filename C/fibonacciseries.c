#include<stdio.h>
int main()
{
	int a, b, c, i, n;
	printf("\nEnter the number:");
	scanf("%d",&n);
	a=1;
	b=1;
	printf("\t%d\t%d",a,b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
	}
	return 0;
}
