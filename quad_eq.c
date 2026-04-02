#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float k1,k2;
    printf("Enter a\t");
    scanf("%d", &a);4
    printf("Enter b\t");
    scanf ("%d", &b);
    printf("Enter c\t");
    scanf("%d",&c);
    printf("Formed quadratic equation is\n");
    printf("%dx^2 + %dx + %d\n",a,b,c);
    printf("Roots of the equation are\n");
    k1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    k2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    printf("%f",k1);
    printf("%f",k2);
    return 0;
}
