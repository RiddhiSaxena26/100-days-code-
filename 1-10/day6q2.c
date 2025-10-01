#include<stdio.h>
int main (){
    int n;
    printf("enter number : ");//input number 
    scanf("%d",&n);
    if(n>0){
        printf("number is positive");
    }
    else if(n<0){
        printf("number is negative");

    }
    else {
        printf("zero");
    }
    return 0;

    
}