#include<stdio.h>
int main (){
	int num1,num2,sum;
	
	printf("enter value of num1 :");
	scanf("%d",&num1);
	
	printf("enter value of num2 :");
	scanf("%d",&num2);
	
	sum = num1+num2;
	
	printf("your sum is :%d\n",sum);
	
	if (sum >= -32768 && sum <= 32767)
    {
        printf("The size of the sum is: Short Integer (2 bytes)\n");
    } 
	else if (sum >= -2147483648 && sum <= 2147483647) 
	{
        printf("The size of the sum is: Integer (4 bytes)\n");
    }
    else 
	{
        printf("The size of the sum is: Long Integer (8 bytes)\n");
    }
    

}
