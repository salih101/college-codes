#include <stdio.h>
int main()
{
    int n, d, s=0, r = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        d = n % 10;
        s += d;
        r = r * 10 + d;
        n = n / 10;
    }
    printf("\nSum of digits = %d\n", s);
    printf("Reverse Order = %d", r);
}