#include<stdio.h>
int main(){
	float pi=3.14;
	float r,area,circumference;
	
	printf("enter value of radius :");
	scanf("%f",&r);
	
	area = pi*r*r;
	circumference = 2*pi*r;
	
	printf("circle area is :%.2f",area);
	printf("\ncircle circumference is :%.2f",circumference);
}
