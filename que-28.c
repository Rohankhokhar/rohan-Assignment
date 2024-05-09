#include<stdio.h>
int main(){
	int years ,month,days;
	
	printf("enter total years :");
	scanf("%d",&years);
	
	days = years*365;
	month = years*12;
	
	printf("total days is :%d\n",days);
	printf("total month is :%d",month); 
}
