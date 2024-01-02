
//Copy a file

#include<stdio.h>
#include<stdlib.h>

#define MAX_FILENAME_LENGTH 20

int main()
{
    char ch, source_file[MAX_FILENAME_LENGTH], target_file[MAX_FILENAME_LENGTH];
    FILE *source, *target;

    printf("Enter name of file to copy\n");
    fgets(source_file, sizeof(source_file), stdin);

    source = fopen(source_file, "r");
    if (source == NULL)
    {
        printf("Unable to open source file. Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter name of target file\n");
    fgets(target_file, sizeof(target_file), stdin);
    target = fopen(target_file, "w");
    if (target == NULL)
    {
        fclose(source);
        printf("Unable to create target file. Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, target);

    printf("File copied successfully.\n");

    fclose(source);
    fclose(target);

    return 0;
}

