/*
Write a Program Which accept String from user and accept one character.Check whether that character is present in string or not.

Input:"Marvellous Multi OS"
      
      e

Output:TRUE

Input:"Marvellous Multi OS"
       W

 Output:FALSE

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    char str1='\0';
   while(*str!='\0')
   {
      if(*str==ch)
      {
         str1=ch;
      }
      str++;
   }

   if(str1==ch)
   {
    return 1;
   }
   else
   {
    return FALSE;
   }
}
////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    char cValue;
    BOOL bRet=FALSE;

    
    printf("Enter the String:\n");
    scanf("%[^'\n']s",arr);
    
    printf("Enter the character:\n");
    scanf(" %c",&cValue);
    
    bRet=ChkChar(arr,cValue);

    if(bRet==TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character is not found");
    }
    return 0;

}