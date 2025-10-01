#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;  // Extract last digit

    digits = (int)log10(num);  // Count digits
    first = num / (int)pow(10, digits);  // Extract first digit

    // Remove first and last digits
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    // Reconstruct the number
    swapped = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);
    return 0;
}