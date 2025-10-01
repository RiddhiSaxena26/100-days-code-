#include <stdio.h>

int main() {
    long long num = 1223334444;  // You can change this number
    int freq[10] = {0};

    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    int maxFreq = 0, mostFreqDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("Most frequent digit: %d (occurs %d times)\n", mostFreqDigit, maxFreq);
    return 0;
}