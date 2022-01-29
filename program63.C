///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Tuesday (28/09/2021)
//  Accept string from user and perform operations.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char *Brr)
{
while(*Brr !='\0')
{
printf("%c\n",*Brr);
Brr++;
}

}



int main()
{
char Arr[20];

printf("\n Enter Your Name :");
scanf("%[^'\n']s",Arr);

Display(Arr);

return 0;
}