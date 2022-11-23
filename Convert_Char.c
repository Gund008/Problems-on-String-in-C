//Accept one character from user and convert case of that character
//Input:a   output:A
//input :D  output :d

#include<stdio.h>

void DisplayConvert(char cValue) //a
{
    if((cValue>='A') && (cValue<='Z'))
    {
        printf("%c\n",cValue + 32);
    }
    else if((cValue>='a') && (cValue<='z'))
    {
        printf("%c\n",cValue-32);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue='\0';

    printf("Enter character\n");
    scanf("%d",&cValue);

    DisplayConvert(cValue);

    return 0;

}