#include<stdio.h>
int main (){
    int a,b;
    printf("enter number 1 : ");
    scanf("%d",&a);
    printf("enter number 2 : ");
    scanf("%d",&b);
    int sum = a+b;
    int diff = a-b;
    int product = a*b;
    int quo = a/b;
    printf("sum = %d\n", sum);
    printf("difference = %d\n",diff);
    printf("product = %d\n",product);
    printf("quotient = %d\n", quo );
    return 0;
}