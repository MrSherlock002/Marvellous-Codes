//Prasad R. Bhosale
//Sunday (13/09/2021)
//A program to return the count of even digits.

#include <stdio.h>

int Count_Even(int iNo);

int main()
{
int iValue= 0,iRet=0;
 
printf("\n Enter your number :");
scanf("%d",&iValue);

iRet=Count_Even(iValue);
printf("\n Total Even digit in given  %d number = %d",iValue,iRet);
return 0;
}

int Count_Even(int iNo)
{
int iCnt=0,iDigit=0,iRev=0;
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
iDigit = iNo%10;

if (iDigit%2==0)
{
iCnt ++;
}
iNo = iNo/10;

//iRev = iRev * 10 +iDigit;

}


return iCnt;
}