#include<stdio.h>

long factorial(int n);
int main(){
	int x;
	printf("Enter a Number:");
	scanf("%d",&x);
	printf("\nFactorial of Enterd Number: %d",factorial(x));
	
}
	
long factorial(int n){
    if (n==0)
        return 1;
    else
        return (n*factorial(n-1));
}
