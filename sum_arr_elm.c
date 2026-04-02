#include<stdio.h>
int main()
{
    int n,i,sum=0;
    int arr[n];
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("enter %d elements of array\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);

    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("the sum of all elements of an array is %d\n",sum);
    return 0;
}
