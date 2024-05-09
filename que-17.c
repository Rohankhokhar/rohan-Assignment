#include<stdio.h>
int main(){
	int salary;
	float percentage,premium;
	
	printf("enter your monthly salary :");
	scanf("%d",&salary);
	
	printf("enter insurence company charges in percentages :");
	scanf("%f",&percentage);
	
	percentage=percentage/100;
	premium = salary *percentage;
	
	printf("tour prmium is :%.2f",premium);
}
