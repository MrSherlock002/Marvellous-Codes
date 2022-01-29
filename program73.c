///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (29/09/2021)
//  Problems on character 
//  Take one character and if that character is Capital then convert it into Small and Viceversa .For other as it is.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CapitalCount(char * str)
{
int iCnt = 0;
while(*str!='\0')
{
if((*str >= 'A') && (*str <= 'Z'))
{
iCnt++;
}
str++;
}
return iCnt;
}



int main ()
{
char Arr[20];
int iRet = 0;
printf("\n Enter String ");
scanf("%[^'\n']s",Arr);

iRet = CapitalCount(Arr);

printf("\n Capital letters are : %d",iRet);
return 0;
}