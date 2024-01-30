
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[100],n,pos,in;
	printf("Enter the size of the array \n");
	scanf("%d",&n);
	printf("enter the ellements in array \n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	printf("enter the element to be inserted \n");
	scanf("%d",&in);
	printf("enter the position to be inserted \n");
	scanf("%d",&pos);
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=in;

	for(i=0;i<=n;i++)
	{
		printf("the array is %d \n",a[i]);
	}
	scanf("%d ");
}

