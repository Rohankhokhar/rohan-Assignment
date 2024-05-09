#include<stdio.h>
int main(){
	int salary,annual_salary;
	
	printf("enter person's monthly salary : ");
	scanf("%d",&salary);
	
	annual_salary = salary*12;
	printf("person's anuual salary is :%d",annual_salary);
}
