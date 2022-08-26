#include<stdio.h>
#include<math.h>

int main(){
    double term,sum=0;
    int i=1;

    do
    {
        term = 1/pow(i,i);
        sum += term;
        i++;
    } while (term>0.000001);
    printf("Sum of series=%f",sum);
}
