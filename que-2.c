#include<stdio.h>
int main(){
	int num1,num2,addition,substriction,multiplication,division,modulo;
	
	printf("enter value of num1 :");
	scanf("%d",&num1);
	
	printf("enter value of num2 :");
	scanf("%d",&num2);
	
	addition=num1+num2;
	substriction=num1-num2;
	multiplication=num1*num2;
	division=num1/num2;
	modulo=num1%num2;
	
	printf("your addition is :%d\n",addition);
	printf("your substriction is :%d\n",substriction);
	printf("your multipication is :%d\n",multiplication);
	printf("your division is :%d\n",division);
	printf("your modulo is :%d\n",modulo);
	
	
}
