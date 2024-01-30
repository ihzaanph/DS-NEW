#include<stdio.h>

int cq[10],front=-1,rear=-1,n;
void enqueue(),dequeue(),display();

int main()
{

  int c;

  clrscr();

  printf("enter the size of the queue:");
  scanf("%d",&n);

  while(1)
  {
   printf("\n1.enqueue \n 2.dequeue \n 3.display \n 4.exit \n");
   scanf("%d",&c);

   switch(c)
   {
     case 1:
     enqueue();
     break;

     case 2:
     dequeue();
     break;

     case 3:
     display();
     break;

     case 4:
     exit(0);
     break;

    }

  }
}

void enqueue()
{

  int item;

  printf("\nenter item to be inserted:\n");
  scanf("%d",&item);

  if((rear+1)%n==front)

     {
	printf("overflow");

     }

  else if(front==-1 || rear==-1)

     {
	front=rear=0;
	cq[rear]=item;
	printf("\nelement inserted");
     }

  else

     {

       rear=(rear+1)%n;
       cq[rear]=item;
       printf("\nelement inserted");

     }

  }


void dequeue()
{


   if(front==-1 && rear==-1)

     {
	printf("\nunderflow");

     }

  else if(front==rear)

    {

      printf("item deleted is:%d\n",cq[front]);
      front=rear=-1;
    }

 else

   {
     printf("item deleted is :%d\n",cq[front]);
     front=(front+1)%n;
   }

 }


 void display()

 {

  int i;

  if(front==-1 && rear==-1)

   {
     printf("empty\n");
   }

  else

   {

     printf("queue elements are:\n");

     i=front;

     while(i!=rear)

      {
	printf("\t %d",cq[i]);
	i=(i+1)%n;
      }

     printf("\t%d",cq[rear]);

   }

 }