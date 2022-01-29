///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (29/09/2021)
//  Problems on character 
//  display count of Capital and Small character.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Count(char *str)
{
int static Ccount,Scount;

while(*str!='\0')
{
if((*str >= 'A') && (*str <= 'Z'))
{
Ccount++;
}
else if((*str >= 'a') && (*str <= 'z'))
{
Scount++;
}
str++;
}
printf("\n Small Letters are %d",Scount);
printf("\n Capital Letters are %d",Ccount);
}



int main ()
{
char Arr[20];
int iRet = 0;
printf("\n Enter String ");
scanf("%[^'\n']s",Arr);

Count(Arr);

return 0;
}