#include<stdio.h>

int main(){
	FILE *f1,*f2;
	int num=0;

	f1=fopen("EVEN","w");
	f2=fopen("ODD","w");
	printf("Enter the Numbers:(Enter -1 to exit)\n");
	while (num != -1)
	{
		scanf("%d",&num);
		if (num %2 == 0) putw(num,f1);
		else putw(num,f2);
	}
	fclose(f1);
	fclose(f2);
	f1=fopen("EVEN","r");
	f2=fopen("ODD","r");
	printf("\nEven Numbers:\n");
	while ((num=getw(f1))!= EOF)
	{
		printf("%d\n",num);
	}
	printf("Odd Numbers:\n");
	while ((num=getw(f2))!= EOF)
	{
		printf("%d\n",num);
	}
	fclose(f1);
	fclose(f2);
}