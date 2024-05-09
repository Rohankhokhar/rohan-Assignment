#include<stdio.h>
int main(){
	int p,t;
	float r,amount,compound_intrest;
	
	printf("enter your amount :");
	scanf("%d",&p);
	
	printf("enter your intrest rate :");
	scanf("%f",&r);
	
	printf("enter your time :");
	scanf("%d",&t);
	
	amount=p*(1+r/100)*t;
    compound_intrest =amount-p;
	
	printf("your amount with intrest is :%.2f",amount);
	printf("your compound inrest is :%.2f",compound_intrest); 
	
}
