#include<stdio.h>
int main()
{
	int a, b, c, max;
	printf("\nEnter any three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	max=((a>b?a:b)>c)?(a>b?a:b):c;
	printf("\nLargest number is %d",max);
	return 0;
}
