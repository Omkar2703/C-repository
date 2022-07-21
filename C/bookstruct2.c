#include<stdio.h>
struct book
{
	int bpn;
	char bn[30], ba[30];
	float bp;
};
int main()
{
	int i,j;
	struct book b[100];
	for(i=0;i<=100;i++)
	{
			printf("\nEnter the bn, bp, bpn, and ba:");
			scanf("%s%f%d%s", &b[i].bn, &b[i].bp, &b[i].bpn, &b[i].ba);
	}
	for(i=0;i<=100;i++)
	{
		printf("\n\n\n");
		printf("\nName of the book is %s",b[i].bn);
		printf("\nbook price is %f", b[i].bp);
		printf("\nbook page number is %d", b[i].bpn);
		printf("\nbook author name is %s", b[i].ba);
	}
	return 0;
}
