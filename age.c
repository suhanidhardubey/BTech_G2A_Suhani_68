#include<stdio.h>
 
int main()
{
    int a;
    printf("Enter your age\n");
    scanf("%d",&a);
    if(a>=0&&a<13){
        printf("child");
    }
    else if(a>=13&&a<18){
        printf("teen");
    }
    else if(a>=18&&a<60){
        printf("adult");
    }
    else if(a<=0){
        printf("invalid age");
    }
    else{
        printf("senior citizen");
    }
}
