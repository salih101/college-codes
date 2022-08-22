#include<stdio.h>
#include<math.h>

int main(){
double term,sum=0;
int i=1;

for(i=1;i<=10;++i)	
{
	term=1/pow(i,i);
	sum+=term;
}

if(sum>0.000001)printf("Sum of series=%f",sum);

}