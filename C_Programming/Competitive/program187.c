/*
    Input : Demo.txt
    Output: Number of capital characters are : 23 

*/

#include<stdio.h>
#include<string.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>

#define BUFFER_SIZE 1024

int CountCapital(char FileName[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0, iRet = 0, iCount = 0, i = 0;

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
            {
                iCount++;
            }
        }
        memset(Buffer,'\0',sizeof(Buffer));
    }
    return iCount;
}

int main()
{
    char FName[30];
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%[^'\n']s",FName);

    iRet = CountCapital(FName);

    printf("Number of capital characters are : %d\n",iRet);

    return 0;
}