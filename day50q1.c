#include <stdio.h>

int main() {
    char date[20];
    int dd, mm, yy;
    char month[4];

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yy);

    // Convert numeric month to 3-letter abbreviation
    switch (mm) {
        case 1:  sprintf(month, "Jan"); break;
        case 2:  sprintf(month, "Feb"); break;
        case 3:  sprintf(month, "Mar"); break;
        case 4:  sprintf(month, "Apr"); break;
        case 5:  sprintf(month, "May"); break;
        case 6:  sprintf(month, "Jun"); break;
        case 7:  sprintf(month, "Jul"); break;
        case 8:  sprintf(month, "Aug"); break;
        case 9:  sprintf(month, "Sep"); break;
        case 10: sprintf(month, "Oct"); break;
        case 11: sprintf(month, "Nov"); break;
        case 12: sprintf(month, "Dec"); break;
        default:
            printf("Invalid month!\n");
            return 0;
    }

    printf("\nConverted date: %02d-%s-%04d\n", dd, month, yy);

    return 0;
}
