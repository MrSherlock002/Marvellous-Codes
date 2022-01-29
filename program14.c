//Prasad R. Bhosale
//Sunday (013/09/2021)
//A program to count digits of given number.

#include <stdio.h>

int Digit_Count(int iNo);

int main()
{
int iValue= 0,iRet=0;
 
printf("\n Enter your number :");
scanf("%d",&iValue);

iRet=Digit_Count(iValue);
printf("\n Total digit in given  %d number = %d",iValue,iRet);
return 0;
}

int Digit_Count(int iNo)
{
int iCnt =0,idigit=0;
if (iNo < 0)
{
iNo = -iNo;
}
while(iNo>0)
{
idigit = iNo%10;
printf("\t %d",idigit);
iNo = iNo/10;
iCnt++;
}
return iCnt;
}