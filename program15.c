//Prasad R. Bhosale
//Sunday (013/09/2021)
//A program to return sum of given numbers digit.

#include <stdio.h>

int Reverse(int iNo);

int main()
{
int iValue= 0,iRet=0;
 
printf("\n Enter your number :");
scanf("%d",&iValue);

iRet=Reverse(iValue);
printf("\n Total digit in given  %d number = %d",iValue,iRet);
return 0;
}

int Reverse(int iNo)
{
int iCnt =0,idigit=0,iSum =0;
if (iNo ==0)
{
return 1;
}
if (iNo < 0)
{
iNo = -iNo;
}
while(iNo>0)
{
idigit = iNo%10;
iSum = iSum +idigit;
iNo = iNo/10;
iCnt++;
}
printf("Sum =%d",iSum);
return iCnt;
}