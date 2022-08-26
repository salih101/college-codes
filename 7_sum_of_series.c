#include<stdio.h>
#include<math.h>

int main(){
double term,sum=0;
int i=1;

for(i=1;i<=100;++i)    
{
    term=1/pow(i,i);
    if (term>0.000001){
        sum+=term;
        }
}

printf("Sum of series=%f",sum);

}
