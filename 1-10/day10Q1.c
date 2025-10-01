#include<stdio.h>
#include<math.h>
int main (){
    int s1,s2,s3;
    printf("enter side one : ");
    scanf("%d",&s1);
    printf("enter side two : ");
    scanf("%d",&s2);
    printf("enter side three : ");
    scanf("%d",&s3);
    if(s1+s2>=s3 || s1+s3>=s2 || s2+s3>=s1){
        printf("the triangle exist\n");
        if (s1==s2==s3){
            printf("it is an EQUILATERAL Triangle");
        }
        else if( s1==s2 || s1==s3|| s2==s3){
            printf("it is an isosceles triangle");
        }
        else {
            printf("it is a scalene triangle");
        }
    }
    else{
        printf("it is not a triangle \nPLEASE ENTER VALID SIDES ");
    }
    return 0;    
}