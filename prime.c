#include <stdio.h>
int main(){
    int n, c = 0, i;
    printf("Enter a number.\n");
    scanf("%d", &n);
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("NOT");
            return 0;
        }
    }
    printf("PRIME");
    
    return 0;
}
