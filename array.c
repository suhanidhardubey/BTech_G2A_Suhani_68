#include<stdio.h>
int main()
{
int i, arr[5];
printf("Enter the elements of an array/n");
for(i=0; i<5;i++)
{scanf("%d", &arr[i]);
}
printf("elements of array are-");
for(i=0;i<5;i++)
printf("%d Elament is %d/n",arr[i]);
}
