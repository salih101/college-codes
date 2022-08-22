#include<stdio.h>

int main()
{
	int a,i=0,d,n=0;
	static int b[ ]={2000,500,200,100,50,20,10,5,2,1};
	printf("Enter the Amount:");
	scanf("%d",&a);
	while(a)
	{
		d=a/b[i];
		printf("Number of %d notes is %d\n",b[i],d);
		n=n+d;
		a=a%b[i];
		i++;
	}
	printf("\nTotal number of currency notes= %d\n",n);

}