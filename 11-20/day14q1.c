#include<stdio.h>
#include<math.h>

int main() {
    int n,sum=0;
    printf("enter number : ");
    scanf("%d",&n);
    for(int i=1 ;i<=n;i++){
        sum=sum+i;
    }
    printf("%d is the sum of numbers upto %d",sum,n);
    return 0;
}
    