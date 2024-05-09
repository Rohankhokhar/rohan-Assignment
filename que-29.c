#include<stdio.h>
int main(){
	int minutes ,second ,hours;
	
	printf("enter total minutes :");
	scanf("%d",&minutes);
	
	hours = minutes / 60 ;
	second = minutes *60;
	
	printf("hours is :%d\n",hours);
	printf("second is :%d",second);
}
