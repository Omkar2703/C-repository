#include<stdio.h>
struct student
{
	char name[30];
	int rollnumber;
	struct marks
	{
		int p, c, m;
	}mk;
};
int main()
{
	struct student s1, s2;
	int t1, t2;
	printf("\nEnter the Name, Rollnumber, Marks in p, c, m of student 1:");
	scanf("%s%d%d%d%d",&s1.name,&s1.rollnumber,&s1.mk.p,&s1.mk.c,&s1.mk.m);
	printf("\nEnter the Name, Rollnumber, Marks in p, c, m of student 2:");
	scanf("%s%d%d%d%d",&s2.name,&s2.rollnumber,&s2.mk.p,&s2.mk.c,&s2.mk.m);
	t1=s1.mk.p+s1.mk.c+s1.mk.m;
	t2=s2.mk.p+s2.mk.c+s2.mk.m;
	if(t1>t2)
	{
		printf("\nName of the student with highest marks is %s", s1.name);
	}
	else
	{
		printf("\nName of the student with highst marks is %s", s2.name);
	}
	return 0;
	
}
