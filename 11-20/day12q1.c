#include<stdio.h>
#include<math.h>
// Writo calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.te a program 
int main() {
    int latedays,fine=0;
    printf("Enter number of late days : ");
    scanf("%d", &latedays);

    if (latedays <=0){
        printf("NO FINE");
    }
    else if(latedays>0 && latedays<=5){
        fine = latedays * 2;
        printf("you fine will be : %d",fine);
    }
    else if(latedays>5 && latedays<=10){
        fine= 5*2 + (latedays-5)*4;
        printf("you fine will be : %d",fine);
    }
    else if( latedays>10 && latedays<=30){
        fine = 5*2 + 5*4 + (latedays -10)*6;
        printf("you fine will be : %d",fine);
    }
    else {
        printf("MEMBERSHIP CANCELED");
    }
    return 0;
}
    