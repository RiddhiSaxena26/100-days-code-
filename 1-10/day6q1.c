#include<stdio.h>
int main (){
    int n;
    printf("enter number : ");//input number 
    scanf("%d",&n);
    if(n%2==0){
        printf("number is even");
    }
    else if(n%2!=0){
        printf("number is odd");

    }
    else {
        printf("error");
    }
    return 0;

    
}