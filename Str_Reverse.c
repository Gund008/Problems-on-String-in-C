
/*
Write a Program which accept string from user and display it inn reverese order

Input: "MarvellouS"
Output:"SuollevraM"

*/
#include<stdio.h>

void strrevX(char *str)
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
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String:\n");
    scanf("%[^\n]s",arr);

    strrevX(arr);
    printf("%s\n",arr);    //call By Address
    return 0;

}
