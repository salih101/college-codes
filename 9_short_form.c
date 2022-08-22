#include<stdio.h>
#include<string.h>

int main(){
	char str[20];
	int i=0;
        printf("Enter the string:");
	gets(str);
	strupr(str);
        printf("\nShort form:");
	printf("%c",str[0]);
	while(str[i]){
		if(str[i] == ' ') printf("%c",str[i+1]);
		i++;
	}
}
