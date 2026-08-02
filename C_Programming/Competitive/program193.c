/*
    Input : Demo.txt
    Output: Display all data of file

*/

#include<stdio.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024
int main()
{
    char FileName[30];
    char Buffer[BUFFER_SIZE];

    int fd = 0, iRet = 0;

    printf("Enter file name : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    
    while((iRet = read(fd,Buffer,BUFFER_SIZE - 1)) > 0)
    {
        Buffer[iRet] = '\0';
        printf("%s",Buffer);
    }

    close(fd);

    return 0;
}