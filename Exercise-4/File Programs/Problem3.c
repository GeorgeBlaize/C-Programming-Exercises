
//Delete a file

#include<stdio.h>

int main()
{


    int status;
    char file_name[25];
    printf("Enter the name of the file you wish to delete\n");
    gets(file_name);

    status=remove(file_name);

    if(status==0){

        printf("%s file deleted successfully\n",file_name);

    }

    else{

        printf("Unable to delete the file\n");
        perror("Error");
    }

    return 0;
}
