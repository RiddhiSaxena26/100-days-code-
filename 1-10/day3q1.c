#include<stdio.h>
int main (){
    float c;
    printf("Enter temperature : ");
    scanf("%f",&c);
    float f= c*(1.8) + 32;
    printf("temperature in farenheit :- %f",f);
    return 0;

    
}