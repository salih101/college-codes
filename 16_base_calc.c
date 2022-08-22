#include<stdio.h>

int main(){
    int x[10],i=0,n,b,t;
    char ch[]="0123456789ABCDEF";
    
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Enter the Base: ");
    scanf("%d",&b);
    t=n;
    while (n){
        x[i] = n%b;
        n /= b;
        i++;
    }
    printf("\n%d in Base %d is: ",t,b);
    for (--i;i>=0;i--) 
    printf("%c",ch[x[i]]);
}