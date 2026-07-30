/*
    Input : Demo.txt    --> 'M'
    Output: Frequency of M is : 1

*/

#include<stdio.h>
#include<io.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountChar(char FileName[], char ch)
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0, i = 0, iRet = 0, iCount = 0;
    
    fd = open(FileName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == ch)
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
    char cValue = 0;
    int iRet = 0;

    printf("Enter the file name : \n");
    scanf("%s",FName);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(FName, cValue);

    printf("Frequency is : %d\n",iRet);

    return 0;
}