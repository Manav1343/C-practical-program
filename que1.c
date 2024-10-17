#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    
    printf("Enter a three-digit positive integer: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Error: Please enter a valid three-digit positive integer.\n");
        return 1;
    }

  
    lastDigit = num % 10;

    firstDigit = num / 100;

    sum = firstDigit + lastDigit;

    printf("The sum of the first and last digit is: %d\n", sum);

    return 0;
}
