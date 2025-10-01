#include<stdio.h>
int main (){
    int n;
    int sum=0;
    printf("enter an integer : ");
    scanf("%d", &n);
    for(int i=0; i<=n ;i++){
        sum=sum+i;
    }
    printf("sum of first %d natural numbers is : %d",n,sum);
    return 0;

}