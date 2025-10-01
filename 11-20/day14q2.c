#include<stdio.h>
#include<math.h>

int main() {
    int n,product=1;
    printf("enter number : ");
    scanf("%d",&n);
    for(int i=0 ;i<=n;i++){
        if(i%2==0){
            product=product*i;
        }
    }
    
    printf("%d is the product of even numbers upto %d",product,n);
    return 0;
}
    