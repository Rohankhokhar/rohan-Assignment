#include<stdio.h>
int main(){
	char school[20],lname[20];
	
	printf("enter first name of school  :");
	scanf("%s",&school);
	
	printf("enter school last name :");
	scanf("%s",&lname);
	
	
	printf("\nabrivatted name is :");
	printf("%c.%c",school[0],lname[0]);
}
