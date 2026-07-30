/*
    Input : Demo.txt    --> 12
    Output: Display first 12 characters from Demo.txt

*/

#include<stdio.h>
#include<io.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

void DisplayN(char FileName[], int iSize)
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0, i = 0, iRet = 0, iCount = 0;

    fd = open("Demo.txt",O_RDONLY);
    
    if(fd == -1)
    {
        printf("Unble to openthe file\n");
        return;
    }

    iRet = read(fd,Buffer,iSize);
    
    if(iRet > 0)
    {
        write(1,Buffer,iRet);
    }
    close(fd);
}

int main()
{
    char FName[30];
    int iValue = 0;

    printf("Enter the file name : \n");
    scanf("%s",FName);

    printf("Enter the number of character : \n");
    scanf("%d",&iValue);

    DisplayN(FName, iValue);

    return 0;
}