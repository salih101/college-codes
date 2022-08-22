#include<stdio.h>

int main()
{
	int year;
	printf("Enter year:");
	scanf("%d",&year);
	if(year%4==0||year%400==0&&year%100!=0){
		printf("\nThe %d year is leap year",year);
	}
	else printf("\nThe year %d is not a leap year",year);
	
}