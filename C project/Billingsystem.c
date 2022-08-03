#include<stdio.h>
struct customer
{
	char name[30];
	int id, srno;
};

int main()
{
	int a,b,c,d,e,f,g,h,z,y,q,m,n,x,l,qty,vad,sam,pani,dosa,idli,dabeli,Misal,i,p;
	int id, srno;
	struct customer s[10];
	
	
	printf("\nEnter the number of customer:");
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		printf("\n<---------------Welcome to VCanteen------------>");
		printf("\n");	
	printf("\nEnter the name:");
	scanf("%s", &s[i].name);
	printf("\nEnter your ID:");
	scanf("%d", &s[i].id);
	printf("\nEnter your cupon number:");
	scanf("%d", &s[i].srno);
	printf("\nMenu:\n1.Vadapav=>15.00 rupees/piece.\n2.Samosa=>15.00 rupees/piece.\n3.Panipuri=>30.00 rupees/plate\n4.Dosa=>40.00 rupees/plate\n5.Idli=>30.00 rupees/plate\n6.Dabeli=>30.00 rupees/pieace\n7.Misal=>40 rupees/plate\n");
	printf("\n---------------------------------------------------");
	printf("\nEnter your choice:");
	scanf("%d", &a);
	switch(a)
	{
		case 1:
			{
				b=vad;
				
				printf("Enter the quantity :");
				scanf("%d", &qty);
				h=qty*15;
				printf("Your bill to be paid is %d", h);
				
			}
			break;
			case 2:
				{
					c=sam;
					
				printf("Enter the quantity :");
				scanf("%d", &qty);
				z=qty*15;
				printf("Your bill to be paid is %d", z);
					
				}
				break;
				case 3:
					{
						d=pani;
					
				printf("Enter the quantity :");
				scanf("%d", &qty);
					y=qty*30;
				printf("Your bill to be paid is %d", y);
						
					}
					break;
					case 4:
						{
							e=dosa;
							
				printf("Enter the quantity :");
				scanf("%d", &qty);
				q=qty*40;
				printf("Your bill to be paid is %d", q);
				
						}
						break;
						case 5:
							{
								f=idli;
							
				printf("Enter the quantity :");
				scanf("%d", &qty);
					m=qty*30;
				printf("Your bill to be paid is %d", m);
							
							}
							break;
							case 6:
								{
									g=dabeli;
								
				printf("Enter the quantity :");
				scanf("%d", &qty);
					n=qty*30;
				printf("Your bill to be paid is %d", n);
								
								}
								break;
								case 7:
									{
										x=Misal;
				
				printf("Enter the quantity :");
				scanf("%d", &qty);
				l=qty*40;
				printf("Your bill to be paid is %d", l);
				
									}
									break;
								defalut:
									{
										printf("\nInvlaid choice.");
									}
	}
	printf("\n-----------------------------------------");
	printf("\nName of the customer:%s",s[i].name);
	printf("\nID of the customer:%d",s[i].id);
	printf("\nCupon no of customer:%d",s[i].srno);
	printf("\nYour order is placed.");
	printf("\n-----------------------------------------");
	printf("\nThank you\nVisit again.");
	printf("\n-----------------------------------------");
	printf("\n");
	}
	
	return 0;
}
