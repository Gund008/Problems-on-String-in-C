
/*
Write a Program which display ASCII table.Table contains symbol,Decimal,Hexadecimal and Octal representation of every member from 0 to 255.
*/

#include<stdio.h>

void DisplayASCII()
{
    int iCnt=0;

    printf("____________________________________________________\n");
    printf("ASCII table\n");
    printf(" ____________________________________________________\n");

    printf("Symbol\t Decimal\t Hex \t Octal");
    for(iCnt=0;iCnt<=255;iCnt++)
    {
        printf("%c \t %d \t %x \t %o\n",iCnt,iCnt,iCnt);
    }

    printf("\n______________________________________________\n");
}
int main()
{
    DisplayASCII();
    return 0;

}