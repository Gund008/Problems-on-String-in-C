/*
write a  Progarm which accept string from user and count number of white spaces

Input:"MarvellouS"
Output: 0

Input:"Marvellous Infosystems"
Output:1


Input: "MarvellouS Infosystems by Piyush Manohar Khairnar"
Output:5
*/

#include<stdio.h>

int CountWhiteX(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str==' ')
        {
            iCnt=iCnt +1 ;
        }
        str++;
    }
    return iCnt;
}
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    int iRet=0;


    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    iRet=CountWhiteX(arr);

    printf("%d\n",iRet);

    return 0;

}

