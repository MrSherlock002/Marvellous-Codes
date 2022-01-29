///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Monday (11/10/2021)
//  Problems on character 
//  Program to reverse the string.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrRev(char *start)
{
    char *end=start;
    char temp;
    while(*end !='\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;        
    }

}



int main()
{

char Arr[30];

printf("\n Enter String :");
scanf("%[^'\n']s",Arr);

StrRev(Arr);

printf("\n Reverse string is %s:",Arr);

return 0;
}