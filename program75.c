///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (29/09/2021)
//  Problems on character 
//  display count of white spaces.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SpaceCount(char *str)
{
int iCnt = 0;
while(*str !='\0')
{
if(*str==' ')
{
iCnt++;
}
*str++;
}
return iCnt;
}



int main ()
{
char Arr[20];
int iRet = 0;
printf("\n Enter String ");
scanf("%[^'\n']s",Arr);

iRet= SpaceCount(Arr);

printf("\n White Spaces are : %d",iRet);

return 0;
}