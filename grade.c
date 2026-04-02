#include<stdio.h>
int main()
{
    int a,b,c,d,e,p;
    printf("The marks of 1st subject is");
    scanf("%d",&a);
    printf("The marks of 2nd subject is");
    scanf("%d",&b);
    printf("The marks of 3rd subject is");
    scanf("%d",&c);
    printf("The marks of 4rth subject is");
    scanf("%d",&d);
    printf("The marks of 5th subject is");
    scanf("%d",&e);
    p=(a+b+c+d+e)/5;
    printf("percentage %d\n",p);
    if(p>=90 && p<=100)
    {
        printf("Grade A");
    }
    else if(p>=80 && p<90)
    {
        printf("Grade B");
    }
     else if(p>=60 && p<80)
    {
        printf("Grade C");
    }
    else
    {
        printf("Grade D");
    }
    return 0;
}
