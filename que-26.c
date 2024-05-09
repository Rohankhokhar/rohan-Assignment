#include<stdio.h>
int main(){
    float temp , celcius ;
	
	printf("enter fahrenheit tempreture :");
	scanf("%f",&temp);
	
	celcius = (temp-32)*5/9;
	
	printf("celcius is :%.2f",celcius);
}
