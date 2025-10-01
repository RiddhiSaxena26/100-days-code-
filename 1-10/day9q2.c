#include<stdio.h>
#include<math.h>
int main (){
    int m,h,e;
    printf("enter marks in maths:- ");
    scanf("%d", &m);
    
    printf("enter marks in hindi:- ");
    scanf("%d", &h);
    
    printf("enter marks in english:- ");
    scanf("%d", &e);
    int avg= (m+h+e)/3;
    if(avg>=90){
        printf("GRADE :- A");

    }
    
    else if(avg<90 && avg>=80){
        printf("GRADE :- B");

    }
    else if(avg<80 && avg>=70){
        printf("GRADE :- C");

    }
    else if(avg<70 && avg>=60){
        printf("GRADE :- D");

    }
    else{
        printf("GRADE :- E");
    }
    
    
    return 0;    
}