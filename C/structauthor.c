#include<stdio.h>
struct book
{
	char title[30], author[30];
	float price;
};
int main()
{
	struct book b[5], temp;
	int i, j;
  	for(i=0;i<=5;i++)
  	{
	  	printf("\nEnter the title, author and price of the book:");
		scanf("%s%s%f",&b[i].title,&b[i].author,&b[i].price);	
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<=5-i;j++)
		{
			if (b[j].price>b[j+1].price)
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	printf("\nSorted list is \n");
	for(i=0;i<=5;i++)
	{
		printf("\n\n\n");
		printf("\nTilte:%s",b[i].title);
		printf("\nAuthor:%s",b[i].author);
		printf("\nPrice:%f",b[i].price);
	}
	return 0;
}
