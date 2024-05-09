#include<stdio.h>
int main(){
	int n;
	
	printf("enter youy int :");
	scanf("%d",&n);
	
	printf("first three powers of int is %d are :-\n",n);
	
	printf("%d^1 =%d\n",n , n );
	printf("%d^2 =%d\n" ,n ,n *n);
	printf("%d^3 =%d\n",n , n*n*n);
}
