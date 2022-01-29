//Prasad R. Bhosale
//Wednesday (15/09/2021)
//A program for to check given number is perfect number or not using bool return type. 
//using two functions.

#include<stdio.h>
#include<stdbool.h>

bool Check_Perfect(int);

int main()

{
int iValue=0;
bool bRet=false; 
printf("Enter Number :");
scanf("%d",&iValue);

bRet =Check_Perfect(iValue);
if (bRet==true)
{
printf("\n Number is perfect");
}
else
{
printf("\n Number is NOT perfect");
}
return 0;
}

bool Check_Perfect(int iNumber)
{	
	int iSum = 0, iCnt = 0;
	if(iNumber<0)
	{
	iNumber = -iNumber;
	}

	for (iCnt=1; iCnt<=(iNumber/2);iCnt++)
	{
	if(iNumber%iCnt == 0)
	{
		iSum = iSum + iCnt;
	}
	}
	int iRet= 0;
	if (iSum == iNumber)
	{
	return true;
	}
	else
	{
	return false;
	}
}
