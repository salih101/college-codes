#include<stdio.h>
int main(){
	char a[100];
    int c=0,i=0;

	printf("Enter the Sentense:");
	gets(a);

	while (a[i]){
        if (c==0 && a[0]!=' ' || a[i]==' '  && (a[i+1]!=' ' && a[i+1]!='\0'))c++;
        i++;
    }
	printf("\nTotal Number Of Words: %d",c);
}