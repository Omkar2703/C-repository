#include<stdio.h>
void rev(char s1[100])
{
	int i, j;
	char temp;
	i=0;
	j=strlen(s1)-1;
	while(i<j)
	{
		temp=s1[i];
		s1[i]=s1[j];
		s1[j]=temp;
		i++;
		j--;
	}
}
int main()
{
	char s1[100], s2[100];
	printf("\nEnter the string:");
	gets(s1);
	strcpy(s2,s1);
	rev(s1);
	if(strcmp(s1,s2)==0)
	{
		printf("\nSring is palindrome.");
	}
	else
	{
		printf("\nString is not pallindrome.");
	}
	return 0;
}
