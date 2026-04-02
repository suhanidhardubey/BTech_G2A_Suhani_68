#include<stdio.h>
 
int main()
{
    int a;
    printf("Enter your age\n");
    scanf("%d",&a);
    if(a<=18)
    {
        printf("You are not eligible to vote");
    }
    else
    {
        printf("You are eligible to vote");
    }
 return 0;
}
