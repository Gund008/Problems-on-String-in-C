/*
Write a Program which accept String from user and check whether it contains vowels in it or not.

Input: "Marvellous"
Output: TRUE

Input:Demo
Output:TRUE

Input:xyz
Output:FALSE

*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChKVowel(char *str)
{
   while(*str!='\0')
   {
      if((*str=='a' ) || (*str=='e' ) || (*str=='i') || (*str=='o') || (*str=='u'))
      {
          break;
      }
      str++;
   }
   if(*str!='\0')
   {
      return TRUE;
   }
   else
   {
      return FALSE;
   }

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    BOOL bRet=FALSE;

    printf("Enter String:\n");
    scanf("%[^\n]s",arr);

    bRet=ChKVowel(arr);
    
    if(bRet==TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }
    return 0;

}