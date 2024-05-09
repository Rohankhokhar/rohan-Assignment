#include<stdio.h>
int main(){
	int days,months;
	
	printf("enter your days :");
	scanf("%d",&days);
	
	months = days / 30 ;
	days = days - (months*30);
	
	printf("month is :%d",months);
	printf("\nremaining days :%d",days);
}
