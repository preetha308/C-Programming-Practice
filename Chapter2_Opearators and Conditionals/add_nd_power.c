#include <stdio.h>
#include <math.h>
int main(){
    int b,c;
    printf("Enter 1st number :");
    scanf("%d",&b);
    printf("Enter 2nd number :");
    scanf("%d", &c);
    int power=pow(b,c);
    int sum=b+c;
    printf("Sum is %d\n", sum);
    printf("Power is %d\n", power);
    return 0;
}