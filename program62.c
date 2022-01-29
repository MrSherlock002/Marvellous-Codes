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
printf("\n %c",*Brr);
Brr++;
printf("\n %c",*Brr);
Brr++;
printf("\n %c",*Brr);
Brr++;
printf("\n %c",*Brr);
Brr++;
printf("\n %c",*Brr);
Brr++;
printf("\n %c",*Brr);
Brr++;
printf("\n %c",*Brr);
}


int main()
{
char Arr[50];
printf("\n Enter your name");
scanf("%[^'\n']s",Arr);

Display(Arr);


return 0;
}