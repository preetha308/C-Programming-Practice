#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter number 1 :");
    scanf("%d", &a);
    printf("Enter number 2 :");
    scanf("%d", &b);
    printf("Enter number 3 :");
    scanf("%d", &c);
    int avg=(a+b+c)/2 ; 
    printf("Average of numbers : %d", avg);
    return 0;
}