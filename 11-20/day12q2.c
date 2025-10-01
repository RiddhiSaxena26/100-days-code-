#include<stdio.h>
#include<math.h>
int main() {
    int units,bill=0;
    printf("enter nuits used : ");
    scanf("%d",units);
    if (units<=100){
        bill = units * 5 ;
        printf("after using %d units you bill is : %d", units,bill);
    }
    else if (units>100 && units<=200){
        bill= 100*5 + (units-100)*7;
        
        printf("after using %d units you bill is : %d", units,bill);

    }
    else if (units>200 &&units<=300){
        bill = 100*5 + 100*7 + (units-200)*10;
        
        printf("after using %d units you bill is : %d", units,bill);
    }
    else {
        bill = 100*5+100*7+100*10 + (units-300)*12;
        
        printf("after using %d units you bill is : %d", units,bill);
    }
    return 0;
}