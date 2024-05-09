#include<stdio.h>
int main(){
	char fname[20],mname[20],lname[20];
	
	printf("enter country full name:");
	scanf("%s %s %s",fname,mname,lname);
	
	printf("your country abbrivated name is :%c.%c.%c",fname[0],mname[0],lname[0]);
}
