///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Tuesday (28/09/2021)
//  Accept string from user and perform operations.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
char Arr[50];
printf("\n Enter your name");
scanf("%[^'\n']s",Arr);

printf("\n Entered name is = %s",Arr);


return 0;
}