#include<stdio.h>
int main (){
    int a , b ,t;
    printf("enter 1 numbers : ");//let no be A
    scanf("%d",&a);
    printf("enter 1 numbers : ");//let no be B
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("A=%d\nB=%d", a ,b);
    return 0;

    
}