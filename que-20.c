#include<stdio.h>
int main(){
	int salary ,r_salary;
	
	printf("enter user salary :");
	scanf("%d",&salary);
	
	int installment=salary/10;
	int premium=salary/10;
	
	r_salary=salary-installment-premium;
	printf("user remaining salary is :%d",r_salary);
}
