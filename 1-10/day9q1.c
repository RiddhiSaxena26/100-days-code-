#include<stdio.h>
#include<math.h>
int main (){
    float a,b,c;
    int x=0,y=0;
    int p;
    printf("ax^2+bx+c\n if above is the format fo a QUADRATIC EQUATION then to find its roots ----\n");
    printf("enter a:");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
    printf("enter c:");
    scanf("%f",&c);
    float d = b*b - 4*a*c;
    p=pow(a,0.5);
    if (d>=0){
    x= (-b + p)/2*a;
    y= (-b - p)/2*a;
    printf("roots of equation are:-\nx=%d\ny=%d",x,y);

    }
    else{
        printf("no real roots ");
    }
    

    
}