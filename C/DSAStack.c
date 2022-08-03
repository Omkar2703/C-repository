#include<stdio.h>
#define MAX 10
typedef struct
{
	int a[MAX];
	int top;
}stack;
void push(stack*s, int x)
{
	if(s->top==MAX-1)
	{
		printf("\nStack is overflow.");
	}
	else
	{
		s->top++;
		s->a[s->top]=x;
	}
}
int isempty(stack*s)
{
	if(s->top==-1)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
int pop(stack*s)
{
	int x;
	if(isempty(s))
	{
		return -1;
	}
	else
	{
		x=s->a[s->top];
		s->top--;
		return x;
	}
}
int stacktop(stack*s)
{
	if(isempty(s))
	{
		return -1;
	}
	else
	{
		return s->a[s->top];
	}
}
void display(stack*s)
{
	int i;
	if (isempty(s))
	{
		printf("\nStack is underflow.");
	}
	else
	{
		for(i=s->top;i>=0;i--)
		{
			printf("%d\n", s->a[i]);
		}
	}
}
int main()
{
	stack s;
	int ch;
	int x;
	do
	{
		printf("\n*Menu*\n1. Push\n2. Pop\n3. Stacktop\n4. Display\n5.Exit\n");
		printf("\nEnter Your choice:");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				{
					printf("\nEnter the element to push:");
					scanf("%d", &x);
					push(&s, x);
					break;
				}
				case 2:
					{
						x=pop(&s);
						if (x==-1)
						{
							printf("\nStack is underflow.");
						}
						else
						{
							printf("\n%d is poped.\n", x);
						}
						break;
					}
					case 3:
						{
							x=stacktop(&s);
							if(x==-1)
							{
								printf("\nSatck is underflow.");
							}
							else
							{
								printf("\n%d is stacktop", x);
							}
				
						}
						case 4:
							{
								display(&s);
								break;
							}
							case 5:
								{
									printf("\nExit staisfied.");
									break;
								}
								default:
									{
										printf("\nInvalid choice.");
									}
		}
	}while(ch!=5);
	return 0;
}
