/*
Input: Q
Output: Q R S T U V W X Y Z

Input:m
Output: m l k  j i h g f e d c b a

Input:8
Output:

*/

#include<stdio.h>

void Display(char ch)
{
    int i=0,j=0;
   
if((ch>='A') && (ch<='Z'))   //capital case
{
    for(i=ch;i<='Z';i++)
    {
        printf("%c\t",ch);
        ch++;
    }
    printf("\n");
}

else if((ch>='a') && (ch<='z'))    //Small case
{
    for(j=ch;j>='a';j--)
    {
        printf("%c\t",ch);
        ch--;
    }
    printf("\n");
}
    
}
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue='\0';

    printf("Enter the chracter:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;

}