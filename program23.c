//Prasad R. Bhosale
//Wednesday (15/09/2021)
//A program for to print power of the given input.(X^Y)
//using two functions.

#include<stdio.h>
#include<stdbool.h>

int Display_Power(int,int);


int main()

{
int iValue=0,iPower=0;

int iRet = 0;
printf("Enter Number X :");
scanf("%d",&iValue);
printf("\n Enter power of %d : ",iValue);
scanf("%d",&iPower);

iRet= Display_Power(iValue,iPower);
printf("\n Power of given %d number is = %d",iValue,iRet);
return 0;
}


int Display_Power(int iNo,int iPow )
{
int iPower=1,iCnt=0;
if (iNo == 0)
{
return 0;
}
if(iNo<0)
{
iNo = -iNo;
}
for (iCnt=1; iCnt<=iPow;iCnt++)
{
iPower = iPower * iNo;
}
return iPower;
}


