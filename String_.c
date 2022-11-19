//write a program which accept name from user and print that name.

//Input:Piyush Khiarnar
//Output:Piyush Khiarnar
#include<stdio.h>

int main()
{
    char  Name[30];  //static array

    printf("Please enter full name:");
    scanf("%[^\n]s",Name);

    printf("Your name is: %s",Name);

    return 0;

}