#include <stdio.h>
int main()
{

    int a, b, c, i, n;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    printf("\nFirst %d fibonacci Numbers are: ", n);
    for (a = 1, b = 0, i = 0; i < n; i++)
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
}       