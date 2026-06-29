/*
     Input : C
    Output : Your exam at 9.20 AM

     Input : d
    Output : Your exam at 10.30 AM
*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A')
    {
        printf("Your exam at 7 AM");
    }
    else if(chDiv == 'B')
    {
        printf("Your exam at 8.30 AM");
    }
    else if(chDiv == 'C')
    {
        printf("Your exam at 9.20 AM");
    }
    else
    {
        printf("Your exam at 10.30");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter division of student : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    
    return 0;
}