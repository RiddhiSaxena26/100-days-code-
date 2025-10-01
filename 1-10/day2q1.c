#include<stdio.h>
int main (){
    int area,perimeter,l,b;
    printf("enter lenght: ");
    scanf("%d",&l);
    printf("enter breadth: ");
    scanf("%d",&b);
    area = l*b;
    perimeter=2*(l+b);
    printf("Area = %d\nPerimetr =%d",area,perimeter);
    return 0;

    
}