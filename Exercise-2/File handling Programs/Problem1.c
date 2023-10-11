//C Program to Read the First Line From a File

#include<stdio.h>
#include<stdlib.h>

int main()
{

    char ch[1000];
    FILE *fptr;
    if((fptr=fopen("beginnersbook.txt","r"))==NULL){

        printf("Error! file does not exist.");
        exit(1);
    }

    fscanf(fptr,"%[^\n]",ch);
    printf("Data from the file:\n%s",ch);
    fclose(fptr);

    return 0;
}
