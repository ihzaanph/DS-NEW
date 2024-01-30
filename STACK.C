#include<stdio.h>
int top=-1,a[10];
void push(int e)
	{
	if(top==9)
	{
	printf("stack overflow \n");
	}
	else
	{
	top++;
	a[top]=e;
	}
	}
int pop()
	{
	int d;
	if(top==-1)
	{
	printf("stackunderflow \n");
	}
	else
	{
	d=a[top];
	top--;
	}
	return  d;
	}
void display()

	{
	int i;
	if(top==-1)
	{
		printf("stack is emplty \n");
	}
	else
	{
	printf("the stack is \n");
	for(i=0;i<=top;i++)
		{
		printf("%d \n",a[i]);
		}
	}
	}
int main()
	{
	int ch,b;
	while(1)
	{
	printf("select a choice\n1.push \n 2.pop \n 3.display \n 4.exit \n");
	scanf("%d",&ch);
	if(ch==1)
		{
		scanf("%d",&b);
		push(b);
		}
	else if(ch==2)
		{
		b=pop();
		printf("popped element is %d \n",b);
		}
	else if(ch==3)
		{
		display();
		}
	else if(ch==4)
		{
		break;
		}
	else
		{
		printf("wrong choice \n");
		}
	}
return 0;
}
