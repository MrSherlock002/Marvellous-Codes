///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (29/09/2021)
//  Accept string from user and perform operations.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

unsigned int strlenX(char *str)
{
int iCnt = 0;
if(str==NULL)
return 0;

while(*str !='\0')
{
iCnt++;
str++;
}

return iCnt;
}



int main()
{

char Arr[20];
int iRet=0;

printf("\n Enter String ");
scanf("%[^'\n']s",Arr);

iRet = strlenX(Arr);

printf("\n Length of String is : %d",iRet);

return 0;
}
