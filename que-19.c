#include<stdio.h>
#include<math.h>


int main(){
	int amount,time,n;
	float rate,compound_amount;
	
	printf("enter value of money :");
	scanf("%d",&amount);
	
	printf("enter howmuch time :");
	scanf("%d",&time),
	
	printf("enter howmuch time compound per year :");
	scanf("%d",&n);
	
	printf("enter value of intrest rate :");
	scanf("%f",&rate);
	rate=rate/100;
	
	compound_amount = amount *pow(1 + rate / n, n * time);
	printf("your compound amount is :%.2f",compound_amount);
}
