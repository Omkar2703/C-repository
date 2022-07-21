#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, P;
	printf("\nEnter the base number:");
	scanf("%d",&a);
	printf("\nEnter the raised to number:");
	scanf("%d",&b);
	P=pow(a,b);
	printf("Result= %d", P);
	return 0;
}
