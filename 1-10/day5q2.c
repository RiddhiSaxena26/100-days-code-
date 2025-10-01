#include<stdio.h>
#include <math.h> 
int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input total seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion logic
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Output in HH:MM:SS format
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}