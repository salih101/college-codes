#include<stdio.h>
#include<string.h>

int main()
{
	int i,flag=1,j;
	char str[50];

	printf("Enter the String:");
	gets(str);
	j=strlen(str);

	for(i=0;i<j;i++,j--)
		if(str[i]!=str[j-1]){
			flag=0;
			break;
		}
	if(flag==1) printf("\nEnterd String is Palindrome");
	else printf("\nEnterd String is not Palindrome");
}
