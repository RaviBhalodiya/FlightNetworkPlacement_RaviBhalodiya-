#include<stdio.h>
#include<conio.h>
#define Max 20
int f=0;
struct stack
{
	int a[Max];
	int top;
}s;

void push(int b)
{
	if(s.top==Max-1)
	{
		printf("stack overflow");

	}
	else
	{
		if(f==0)
		{
			s.a[s.top]=b;
			printf("element is inserted");
			s.top++;
			f=1;

		}
		else
		{
			if(s.a[s.top-1]==9)
			{
				if(b!=0)
				{
					printf("Enter element 0 for continue push");
				}
				else
				{
					s.a[s.top]=b;
					printf("element is inserted");
					s.top++;

				}
			}
			else
			{
				if(s.a[s.top-1]+1==b)
				{
					s.a[s.top]=b;
					printf("element is inserted");
					s.top++;
				}
				else
				{
					printf("enter proper element");
				}

			}


		}
	}
}

int pop()
{
	if(s.top==0)
	{
		printf("stack underflow");
      f=0;
		return 0;
	}
	else
	{
		s.top--;
		printf("Poped element is:%d",s.a[s.top]);
		return s.a[s.top];
	}
}
void main()
{
	int temp,m,j,n;
	struct stack s;
	s.top=0;

		do
		{
			printf("\n\nEnter your choice:\n 1. Push\n 2. Pop\n 3. Exit\n choice:");
			scanf("%d",&n);
			if(n==1)
			{
				printf("Enter element to push:");
				scanf("%d",&j);
				push(j);
			}
			if(n==2)
			{
				temp=pop();
			}
		}while(n!=3);

}
