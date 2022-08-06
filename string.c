#include<iostream> 
using namespace std;

void strrevX(char str[])
{
     char *start=str;
     char *end=str;
     char temp;

     while(*end!='\0')
     {
        end++;
     }
     end--;    
}

int main( )
{
    char Arr[20];
    int iret=0;

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);  //scanf("%[^'\n']s",Arr);
  
    strrevX(Arr);  
    cout<<"String upper case:"<<Arr<<endl;
    return 0;


}