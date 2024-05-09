#include<stdio.h>
int main(){
    float base,hight,area;
	
	printf("enter value of base :");
	scanf("%f",&base);
	
	printf("enter value of hight:");
	scanf("%f",&hight);
	
	area = 0.5*hight*base;
	printf("ypur trangle area of :%.2f",area);      	
}
