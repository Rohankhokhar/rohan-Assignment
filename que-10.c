#include<stdio.h>
int main(){
	int w,l,h,c;
	
	printf("enter value of prizam width :");
	scanf("%d",&w);
	
	printf("enter value of prizam lenghth :");
	scanf("%d",&l);
	
	printf("enter value of prizam hight :");
	scanf("%d",&h);
	
	c = 2*((w*l)+(h*l)+(h*w));
	printf("circumference of prizam is :%d",c);
}
