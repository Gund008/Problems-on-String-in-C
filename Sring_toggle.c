/*
write a  Progarm which accept string from user and toggle the case

Input:" Marvellous Multi OS"
Output: mARVELLOUS mULTI os

*/

#include<stdio.h>
void strtoggleX(char *str)
{
    char str1='\0';
    while(*str!='\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            *str=*str + 32;
        }
        else if((*str>='a') && (*str<='z'))
        { 
            *str=*str - 32;
        }
        else
        { 
            *str;
        }
        str++;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    strtoggleX(arr);

    printf("Modified String is %s",arr);
    
    return 0;

}
