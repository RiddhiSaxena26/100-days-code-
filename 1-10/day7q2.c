#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>='a'&&ch<='z'){
        printf("it is a lower case alphabet");
    }
    else if(ch>='A'&&ch<='Z'){
        printf("it is a lower case alphabet");
    }
    else{
        printf("not alphabet");
    }
    
    return 0;
}