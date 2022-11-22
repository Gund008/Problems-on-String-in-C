/*
Write a Program which accept String from user revrse that string in place.

Input:"abcd"
Output:"dcba"

Input:"abba"
Output:"abba"

*/

#include<stdio.h>

void StrRevX(char *str)
{
    char temp='\0';
    char *start=NULL;
    char *end=NULL;

    start=str;
    end=str;

    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp=*start;    //xerox Copy
        *start=*end;
        *end=temp;

        *start++;
        *end--;
    }  
}
/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];

    printf("Enter String:\n");
    scanf("%[^'\n]s",&arr);

    StrRevX(arr);

    printf("Modified string is %s",arr);  //call by Address
    return 0;

}