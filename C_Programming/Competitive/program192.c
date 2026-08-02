/*
    Input : Demo.txt
    Output: File gets created successfully

*/

#include<stdio.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter file name : \n");
    scanf("%s",FileName);

    fd = creat("Demo.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else 
    {
        printf("File gets created successfully\n");

        close(fd);
    }

    return 0;
}