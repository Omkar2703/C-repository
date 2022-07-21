#include<stdio.h>
struct player
{
	char name[30], team [30];
	float average;
};
int main()
{
	int i;
	struct player p[10];
	for(i=0;i<=10;i++)
	{
		printf("\nEnter the name of player, team name of player, batting average:");
		scanf("%s%s%f",&p[i].name,&p[i].team,&p[i].average);
	}
	printf("\nPlayer list.");
	for(i=0;i<=10;i++)
	{
		printf("\n\n\n");
		printf("\nPlayer name:%s",p[i].name);
		printf("\nTeam name:%s",p[i].team);
		printf("\nBatting average:%f",p[i].average);
	}
	return 0;
}
