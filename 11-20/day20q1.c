#include <stdio.h>

int main() {
    int num, product =1;
    int digit, odd=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num!=0){
        digit = num % 10;
        if (digit % 2 !=0 ){
            product = product * digit ;
            odd=1;
        }
        num/=10;
    }
    if (odd==1){
    printf("product of odd digits = %d\n", product);
    }
    else {
        printf("no odd digits found ");
    }
    return 0;
}