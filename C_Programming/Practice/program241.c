#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);  // Problem Solved

    printf("Entered string is : %s\n",Arr);

    return 0;
}

// जोपर्यंत आपण enter केले की आखही string print होते 