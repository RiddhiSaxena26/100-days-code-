int main() {
    int a,b,c;
    printf("PLEASE INPUT 3 DIFFERENT NUMBERS \n");
    printf("enter number : ");
    scanf("%d",&a);
    printf("enter number : ");
    scanf("%d",&b);
    printf("enter number : ");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("%d is greater",a);
    }
    else if (b>a && b>c){
        printf("%d is greater",b);
    }
    else if (c>a && c>b){
        printf("%d is greater",c);
    }
    else {
        printf("error");
    }
    
    return 0;
}