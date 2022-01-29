///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Monday (11/10/2021)
//  Problems on character 
//  display count repeated characher.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Swap(char *p, char *q)
{
    char temp;
    temp = *p;
    *p=*q;
    *q=temp;

}


int main()
{

char Arr[30],Brr[30],cValue='\0';
char ch1, ch2;



printf("\n Enter character 1 : ");
scanf("%c",&ch1);

printf("\n Enter character 2 : ");
scanf(" %c",&ch2);

printf("\n Before swapping characters : %c, %c",ch1,ch2);

Swap(&ch1, &ch2);

printf("\n After swapping characters are :  %c  %c",ch1,ch2);

return 0;
}