//C Program to Write a Sentence to a File

#include<stdio.h>
#include<stdlib.h>

int main()
{

    char ch[500];

    FILE *fptr;

    fptr=fopen("beginnersbook.txt","w");

    if(fptr==NULL){

        printf("Error! File cannot be opened");

        exit(1);
    }

    printf("Enter sentence that you would like to write:\n");
    fgets(ch,sizeof(ch),stdin);
    fprintf(fptr,"%s",ch);
    fclose(fptr);
    return 0;
}
