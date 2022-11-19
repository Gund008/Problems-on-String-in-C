/*
Accept character from user and Display its ASCII value in decimal Octal and Hexadecimal formate

Input: A
Output: Decimal    65
        Octal      0101
        Hexadeciaml 0X41
*/

#include<stdio.h>

void Display(char ch)
{
    if((ch>='A') || (ch<='Z'))
    {
        printf("Decimal:%d\n",ch);
        printf("Octal:%o\n",ch);
        printf("Hexadeciaml:%x\n",ch);
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char cValue='\0';

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;

}