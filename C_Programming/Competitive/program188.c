/*
    Input : Demo.txt
    Output: Number of white spaces are : 1

*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>

#define BUFFER_SIZE 1024

int CountWhite(char FileName[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0, iRet = 0, iCount = 0, i = 0;

    fd = open("Demo.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unble to open file\n");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == ' ')
            {
                iCount++;
            }
        }
    }
    close(fd);
    return iCount;
}

int main()
{
    char FName[30];
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%['\n']s",FName);

    iRet = CountWhite(FName);

    printf("Number of white spaces are : %d\n",iRet);

    return 0;
}