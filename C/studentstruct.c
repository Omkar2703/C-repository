#include<stdio.h>
struct student
{
char name[30];
int rollnumber;
float fees;	
};
int main()
{
	struct student s[10];
	int i, j;
	for(i=0;i<=10;i++)
	{
		printf("\nEnter the Name, Rollnumber, Fees:");
		scanf("%s%d%f", &s[i].name, &s[i].rollnumber, &s[i].fees);
	}
	printf("\nList of stuedent is..");
	for(i=0;i<=10;i++)
	{
		printf("\n\n\n");
		printf("\nName of the student is %s",s[i].name);
		printf("\nRollnumber is %d", s[i].rollnumber);
		printf("\nFees is %f", s[i].fees);
	}
	return 0;
}
