/*
Write a Program which accpet string from user and return diffrence between Frequency of small charcaters and frequency of Capital characters.

Input: "MarvellouS"
Output: 6 (8-2)

*/

#include<stdio.h>

int Diffrence(char *str)
{
    int iCnt=0,iCnt1=0;
    int iFre=0;

    while(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            iCnt1++;
        }
        else if((*str>='A') && (*str<='Z'))
        {
            iCnt++;
        }
         str++;
      
    }
    return  iFre=iCnt1-iCnt;
}
///////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String:\n");
    scanf("%[^\n]s",arr);

    iRet=Diffrence(arr);

    printf("%d\n",iRet);

    return 0;

}