#include<stdio.h>
int main(){
	int num1 , num2;
	
	printf("enter value of num1:");
	scanf("%d",&num1);
	
	printf("enter value of num2:");
	scanf("%d",&num2);
	
	num1=num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	
	printf("your swapping number is :\n");
	printf("num1 is :%d\n",num1);
	printf("num2 is :%d",num2);
	
}
