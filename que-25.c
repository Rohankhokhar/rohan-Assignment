#include<stdio.h>
int main(){
	int e1,e2,e3,e4,e5;
	
	printf("enter 1st expence :");
	scanf("%d",&e1);
	
	printf("enter 2nd expence :");
	scanf("%d",&e2);
	
	printf("enter 3rd expence :");
	scanf("%d",&e3);
	
	printf("enter 4th expence :");
	scanf("%d",&e4);
	
	printf("enter 5th expence :");
	scanf("%d",&e5);
	
	int avrage = (e1+e2+e3+e4+e5)/5;
	printf("evrage expense is :%d",avrage);
}
