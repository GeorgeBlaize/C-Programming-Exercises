
//C Program to Display Prime Numbers Between Two Intervals

#include <stdio.h>

int main() {
    int low, high, i, flag;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    // iterate through each number between low and high
    for (i = low; i <= high; i++) {
        // assume the number is prime
        flag = 1;

        // check if the number is divisible by any number between 2 and i-1
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        // if the number is prime, print it
        if (flag == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
