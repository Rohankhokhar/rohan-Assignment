#include<stdio.h>
int main(){
	int years ,days;
	
	printf("enter your years :");
	scanf("%d",&years);
	
	days = years * 365 ;
	years = days / 365 ;
	
	printf("your years is %d\n",years );
	printf("your days is %d",days);
}
