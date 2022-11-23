/*
write a  Progarm which accept string from user and display only digits from that string

Input:"Marve89llous121"
Output: 89121

Input:"Demo"
Output:

*/
#include<stdio.h>

void DisplayDigit(char *str)
{
    char iDigit='\0';

  while(*str!='\0')
  {
    if((*str>='0') && (*str<='9'))
    {
        iDigit=*str;
    }
    str++;
  }
    printf("%c\n",iDigit);
}

////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;

}

