#include<stdio.h>
int main(){
	char e1,e2,e3,e4,e5;
	int s1,s2,s3,s4,s5,evrage_salary,total_salary;
	
	printf("enter employe 1 name :");
	scanf("%s",&e1);
	
	printf("enter emloye 1 salary :");
	scanf("%d",&s1);
	
	printf("enter employe 2 name :");
	scanf("%s",&e2);
	
	printf("enter emloye 2 salary :");
	scanf("%d",&s2);
	
	printf("enter employe 3 name :");
	scanf("%s",&e3);
	
	printf("enter emloye 3 salary :");
	scanf("%d",&s3);
	
	printf("enter employe 4 name :");
	scanf("%s",&e4);
	
	printf("enter emloye 4 salary :");
	scanf("%d",&s4);
	
	printf("enter employe 5 name :");
	scanf("%s",&e5);
	
	printf("enter emloye 5 salary :");
	scanf("%d",&s5);
	
	total_salary=s1+s2+s3+s4+s5;
	evrage_salary = total_salary/5;
	
	printf("evrage salary of employe is :%d\n",evrage_salary);
	printf("total salary is :%d",total_salary);
}
