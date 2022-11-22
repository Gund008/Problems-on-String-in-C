/*
write a  Progarm which accept string from user and convert it into lower case

Input:" Marvellous Multi OS"
Output: marvellous multi os

*/

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str!='\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            *str=*str + 32;
        }
        else
        {
            *str;
        }
        str++;
    }
}
////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    strlwrX(arr);

    printf("Modified String is %s",arr);   //Call By Address
    
    return 0;

}