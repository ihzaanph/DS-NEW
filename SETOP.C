#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k[20],m[20],Uni[20],Int[20],u[20],a[20],b[20],p,q,r,U[20],A[20],B[20];
	clrscr();
	printf("enter size of universal set\n");
	scanf("%d",&p);
	printf("enter universal set\n");
	for(i=0;i<p;i++){
		scanf("%d",&u[i]);
		U[i]=1;
	}
	printf("enter size of set a\n");
	scanf("%d",&q);
	printf("enter set a\n");
	for(i=0;i<q;i++){
		scanf("%d",&a[i]);
	}
	printf("enter size of set b\n");
	scanf("%d",&r);
	printf("\nenter set b\n");
	for(i=0;i<r;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<p;i++){
		for(j=0;j<p;j++){
			if(u[i]==a[j]){
				A[i]=1;
				break;
			}
			else{
				A[i]=0;
			}
		}
	}
	for(i=0;i<p;i++){
		for(j=0;j<p;j++){
			if(u[i]==b[j]){
				B[i]=1;
				break;
			}
			else{
				B[i]=0;
			}
		}
	}
	printf("\nset A\n");
	for(i=0;i<p;i++){
	       printf("%d\t",A[i]);
	}
	printf("\nset B\n");
	for(i=0;i<p;i++){
	       printf("%d\t",B[i]);
	}
	printf("\nSet A Union Set B:\t");
	for(i=0;i<p;i++){
	   Uni[i]=A[i] || B[i];
	}
	for(i=0;i<p;i++){
	   if(Uni[i]==1)
		printf("%d\t",u[i]);
	}
	printf("\nSet A Intersection Set B:\t");
	for(i=0;i<p;i++){
	   Int[i]=A[i] && B[i];
	}
	for(i=0;i<p;i++){
	   if(Int[i]==1)
		printf("%d\t",u[i]);
	}
	printf("\nSet A - Set B:\t");
	for(i=0;i<p;i++){
	   m[i]=A[i] - B[i];
	}
	for(i=0;i<p;i++){
	   if(m[i]==1)
		printf("%d\t",u[i]);
	}
	printf("\nSet B - Set A:\t");
	for(i=0;i<p;i++){
	   k[i]=B[i]-A[i];
	}
	for(i=0;i<p;i++){
	   if(k[i]==1)
		printf("%d\t",u[i]);
	}
	getch();

}