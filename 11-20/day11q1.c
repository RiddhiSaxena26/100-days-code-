#include<stdio.h>
#include<math.h>
int main (){
    int day;
    printf("please enter number (1-12): ");
    scanf("%d",&day);
    switch(day){
        case 1 : {
            printf("january\31 days");
            break;
        }
        case 2: {
            printf("feburary\n28 days");
            break;
        }
        case 3 : {
            printf("march\n31 days");
            break;
        }
        case 4 : {
            printf("april\n30days");
            break;
        }
        case 5 : {
            printf("may\n31days");
            break;
        }
        case 6 : {
            printf("june\n30days");
            break;
        }
        case 7 : {
            printf("july\n31days");
            break;
        }
        case 8 : {
            printf("august\n31days");
            break;
        }
        case 9 : {
            printf("september\n30days");
            break;
        }
        case 10 : {
            printf("october\n31days");
            break;
        }
        case 11 : {
            printf("november\n30days");
            break;
        }
        case 12 : {
            printf("december\n31days");
            break;
        }
       
        default : {
            printf("number should be between 1-12");
        }
    }
    
    
    return 0;    
// }


//     int lateDays;
//     int fine = 0;

//     printf("Enter the number of late days: ");
//     scanf("%d", &lateDays);

//     if (lateDays <= 0) {
//         printf("No fine. Book returned on time.\n");
//     } else if (lateDays <= 5) {
//         fine = lateDays * 2;
//         printf("Fine: ₹%d\n", fine);
//     } else if (lateDays <= 10) {
//         fine = (5 * 2) + ((lateDays - 5) * 4);
//         printf("Fine: ₹%d\n", fine);
//     } else if (lateDays <= 30) {
//         fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
//         printf("Fine: ₹%d\n", fine);
//     } else {
//         printf("Membership Cancelled due to excessive delay.\n");
//     }