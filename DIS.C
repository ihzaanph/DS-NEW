#include<stdio.h>
void main(){
int i,z,j,a[10],b[10],c[100],n,m,f=0;
clrscr();
printf("Enter size set 1:");
scanf("%d",&n);
printf("Enter set 1:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter size set 2:");
scanf("%d",&m);
printf("Enter set 2:");
for(i=0;i<m;i++)
scanf("%d",&b[i]);
for(i=0;i<n;i++){
  for(j=0;j<m;j++){
	if(a[i]==b[j])
		f=1;
	}
   }
if(f){
      printf("\nEnter two disjoint sets!!");
}else{
   while(1){
   printf("\nEnter the option:\n1.create\n2.find\n3.union\n4.exit\n");
   scanf("%d",&z);
   f=0;
   switch(z){
     case 1:printf("Enter size set 1:");
	    scanf("%d",&n);
	    printf("Enter set 1:");
	    for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	    printf("Enter size set 2:");
	    scanf("%d",&m);
	    printf("Enter set 2:");
	    for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	    for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i]==b[j])
				f=1;
		}
	    }
	    if(f){
	       printf("Enter two disjoint sets!!");
	       break;
	    }else{
		printf("Created two disjoint sets!!");
	    }
	    break;
    case 2:printf("Enter element to find:\n");
	   scanf("%d",&j);
	   for(i=0;i<n;i++){
	      if(a[i]==j){
		  printf("Find(%d):%d",j,a[0]);
		  break;
	      }
	   }
	   for(i=0;i<n;i++){
	      if(b[i]==j){
		  printf("Find(%d):%d",j,b[0]);
		  break;
	      }
	   }
	   break;
    case 3:printf("set 1 Union set2:\n");
	   for(i=0;i<n;i++)
	      c[i]=a[i];
	   for(i=0;i<m;i++)
	      c[n+i]=b[i];
	   for(i=0;i<n+m;i++)
	      printf("%d\t",c[i]);
	   break;
    case 4:exit();
    default:printf("Enter valid option!!");
	    break;
   }
  }
  }
  getch();
}