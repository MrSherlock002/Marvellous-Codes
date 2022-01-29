//Prasad R. Bhosale
//Wednesday (15/09/2021)
//A program for to check given number is Pallindrome or not using bool return type. 
//using multiple functions.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Check_Pallindrome(int iNo)
{
int iTemp= iNo;
int iRev =0;
if(iNo < 0)
{
iNo=-iNo;
}
int iDigit=0;
while(iNo>0)
{
iDigit = iNo%10;
iNo=iNo/10;
iRev = (iRev*10) +iDigit;
if (iRev==iTemp)
{
return TRUE;
}
}
return FALSE;
}



int main()
{
int iValue = 0;
BOOL bRet = FALSE;
printf("\n Enter your number :");
scanf("%d",&iValue);

bRet = Check_Pallindrome(iValue);

if(bRet == TRUE)
{
printf("\n Given %d number is Pallindrome number",iValue);
} 
else
{
printf("\n Given %d number is NOT a Pallindrome number",iValue);
}

return 0;
}