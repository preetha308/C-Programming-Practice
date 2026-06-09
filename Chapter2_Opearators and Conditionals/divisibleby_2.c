#include <stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    printf("%d", num%2==0);
    return 0;
}