#include<stdio.h>
int main(){
	int num1,num2;
	
	printf("enter value of num1:");
	scanf("%d",&num1);
	
	printf("enter value of num2:");
	scanf("%d",&num2);
	
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	
	printf("your swapping number is :-");
	
	printf("\nnum1 is :%d",num1);
	printf("\nnum2 is :%d",num2);
	
}
