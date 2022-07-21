#include<stdio.h>
int main()
{
	int a,b,c,A, M, S, Mo;
	float D;
	printf("\nEnter the first number:");
	scanf("%d",&a);
	printf("\nEnter the second number:");
	scanf("%d", &b);
	printf("\nMenu.\n1. Addition:\n2. Multiplication:\n3. Substraction:\n4. Division:\n5. Modulus.\n");
	printf("\nEnter the choice:");
	scanf("%d",&c);
	switch (c)
	{
		case 1:
			{
				A=a+b;
				printf("\nAddition of %d and %d is %d",a,b,A);
				break;
			}
			case 2:
				{
					M=a*b;
					printf("\nMultiplication of %d and %d is %d",a,b,M);
					break;
				}
				case 3:
					{
						S=a-b;
					    printf("\nSubstraction  of %d and %d is %d",a,b,S);
						break;
					}
					case 4:
						{
							D=(float)a/b;
							printf("\nDivision of %d and %d is %f",a,b,D);
							break;
						}
						case 5:
							{
								Mo=a%b;
								printf("\nModulus of %d and %d is %d",a,b,Mo);
								break;
							}
							default:
								{
									printf("\nInvalid choice!!");
								}
						
	}
	return 0;
}
