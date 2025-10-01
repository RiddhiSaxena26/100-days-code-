#include<stdio.h>
#include<math.h>

int fact(int n);
int main (){
    int a ;
    printf("enter number : ");
    scanf("%d",&a);
    printf("%d",fact(a));
    return 0;
}
int fact(int n){
    if (n==0){
        return 1; //since factorial of 0 is 1
    }
    else 
    return n*fact(n-1);
}
    