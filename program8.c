//Prasad R. Bhosale
//Tuesday (07/09/2021)
//A program to add sum recursively.

#include <stdio.h>

int Addition (int);			//Declaration

int main()

{
int iNo= 0, iRet=0;
printf("\n Enter your number :");
scanf("%d",&iNo);
iRet = Addition(iNo);
printf("Addition is : %d \n",iRet);
return 0;
}

int Addition(int iValue)		//Defination
{
if (iValue<0)
{
iValue = -iValue;
}

int iSum = 0;
int iCnt = 0;

for (iCnt = 1; iCnt<=iValue; iCnt++)
{
iSum = iSum +iCnt;
}
return iSum;
}