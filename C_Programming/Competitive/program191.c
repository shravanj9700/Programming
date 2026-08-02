/*
    Input : Demo.txt
    Output: File opened successfully

*/

#include<stdio.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter file name : ");
    scanf("%s",FileName);

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File opened successfully\n");

        close(fd);
    }

    return 0;
}