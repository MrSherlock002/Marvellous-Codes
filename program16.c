//Prasad R. Bhosale
//Sunday (013/09/2021)
//A program to return reverse of given number.

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
int iCnt=0,iDigit=0,iRev=0;
while(iNo!=0)
{
iDigit = iNo%10;
iRev = (iRev * 10)+iDigit;
iNo = iNo/10;

iCnt++;
}
printf("\n Reverse of given number is %d",iRev);

return iCnt;
}