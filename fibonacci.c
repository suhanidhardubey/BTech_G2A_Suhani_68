#include <stdio.h>
int main ()
{
    int n, i, a=0, b=1, c;
    printf("Enter range to print fibonacci series of 'n' numbers.\n");
    scanf("%d", &n);
    printf("Fibonacci series:\n");
    if(n == 1)
    printf("%d", a);
    else if(n>=2)
    {
        printf("%d, %d", a, b);
        for(i = 3; i<=n; i++)
        {
        c = a + b;
        a = b;
        b = c;
        printf(", %d", c);
        }
    }
    else
    printf("Does not exist for the range.");
    return 0;
}
