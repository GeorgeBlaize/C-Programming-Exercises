//C Program to Sort set of strings in alphabetical order
#include <stdio.h>
#include <string.h>

int main() {
    int i, j, count;
    char str[25][25], temp[25];

    printf("How many strings you are going to enter?: ");
    scanf("%d", &count);


    while (getchar() != '\n');

    printf("Enter strings one by one:\n");
    for (i = 0; i < count; i++) {
        fgets(str[i], sizeof(str[i]), stdin);

        if (str[i][strlen(str[i]) - 1] == '\n') {
            str[i][strlen(str[i]) - 1] = '\0';
        }
    }

    for (i = 0; i < count; i++) {
        for (j = i + 1; j < count; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("Order of Sorted String:\n");
    for (i = 0; i < count; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
