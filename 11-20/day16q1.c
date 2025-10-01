#include<stdio.h>
#include<math.h>

int main (){
    int num;
    int reversed=0,digit=0;
    printf("enter number : ");
    scanf("%d",&num);
    while(num!=0){
        digit=num%10;
        reversed = reversed*10+digit;
        num=num/10;
        
    }  
    printf("reversed number : %d",reversed);
    return 0;

}
    