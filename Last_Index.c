/*
Write a Program Which accept String from user and accept one character.return index of Last Occurence.

Input:"Marvellous Multi OS"
      
      M

Output:11

Input:"Marvellous Multi OS"
       W

 Output:-1

 Input:"Marvellous Multi OS"
        e

 Output:4

*/

#include<stdio.h>

int LastChar(char *str,char ch)
{
    int  iCnt=0;
    int  str1=-1;

   for(iCnt=0;str[iCnt]!='\0';iCnt++)
     {
        if(str[iCnt]==ch)
         {
            str1=iCnt; 
         }
         str[iCnt]++;
    }
    return str1;

}
////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    char cValue;
    int iRet=0;

    
    printf("Enter the String:\n");
    scanf("%[^'\n']s",arr);
    
    printf("Enter the character:\n");
    scanf(" %c",&cValue);
    
    iRet=LastChar(arr,cValue);

    printf("Character location is %d",iRet);

    return 0;

}