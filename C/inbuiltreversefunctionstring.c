#include<stdio.h>
void rev(char s1[100])
{
	int i,j;
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
	rev(s1);
	printf("\nRevrse of the string is %s",s1);
}
