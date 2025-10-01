#include<stdio.h>
int main (){
    int a , b ;
    printf("enter 1 numbers : ");//let no be A
    scanf("%d",&a);
    printf("enter 1 numbers : ");//let no be B
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A=%d\nB=%d", a ,b);
    return 0;

    
}