//C program to find the length of a String without using function strlen()

#include <stdio.h>

int main() {
    char str[100];
    int length = 0; // Initialize length to 0

    printf("Enter a string: \n");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; ++i) {
        length++; // Increment length for each character in the string
    }

    printf("Length of input string: %d\n", length); // Print the final length

    return 0;
}
