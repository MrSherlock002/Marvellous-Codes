///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (29/09/2021)
//  Problems on character 
//  (Problems on string.)
//  Accept string from the user and count the small letters in it.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SmallCount(char * str)
{
int iCnt = 0;
while(*str!='\0')
{
if((*str >= 'a') && (*str <= 'z'))
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

iRet = SmallCount(Arr);

printf("\n Small letters are : %d",iRet);
return 0;
}