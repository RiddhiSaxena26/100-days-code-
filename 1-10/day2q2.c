#include<stdio.h>
int main (){
    float area=0,circumference=0,radius ;
    printf("Enter Radius of circle : ");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    printf("Circumference =%f\nArea =%f",circumference,area);
    return 0;

    
}