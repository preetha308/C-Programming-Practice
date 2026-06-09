#include <stdio.h>
int main(){
    int a,b;
    printf("Enter 1st number :");
    scanf("%d", &a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    if (a>b){
        printf("2nd number is small");
    }
    else{
        printf("1st number is small");
    }
    return 0;
}