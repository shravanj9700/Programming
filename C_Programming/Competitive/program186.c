/*
    Input : Demo.txt
    Output: Number of small characters are 3

*/

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<io.h>

#define BUFFER_SIZE 1024

int CountSmall(char FileName[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0, iRet = 0, iCount = 0, i = 0;

    fd = open("Demo.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] >= 'a' && Buffer[i] <= 'z')
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
    char  FileName[30];
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%[^'\n']s",FileName);

    iRet = CountSmall(FileName);
    
    printf("Number of small characters are : %d\n",iRet);

    return 0;
}