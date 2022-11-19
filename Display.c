/*
Accept division of student from user and depends on the division display exam timing.There are 4 Division in school as A,B,C,D.Exam
of division A at 7 AM,B at 8.30 Am,and C at 9.20 AM D at 10:30.(Application should be case insensetive)

Input:C
Output: Your exam at 9.20AM

INput:d
Output:Your exam at 10.30AM
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

void DisplaySchedule(char cdDiv)
{
    if((cdDiv=='A') || (cdDiv=='a'))
    {
        printf("Your exam at 7 AM");
    }
    else if((cdDiv=='B') || (cdDiv=='b'))
    {
        printf("Your exam is 8.30 AM ");
    }
    else if((cdDiv=='C') || (cdDiv=='c'))
    {
        printf("Your exam is 9 20am");
    }
    else if((cdDiv=='D') || (cdDiv=='d'))
    {
        printf("Your exam is 10.30");
    } 
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter Your division:\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    return 0;
}