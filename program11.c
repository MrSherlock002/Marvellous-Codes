//Prasad R. Bhosale
//Tuesday (08/09/2021)
//A program to find factorial using while loop

#include <stdio.h>

unsigned long int Factorial(int);			//Declaration

int main()

{
int iNo= 0;
unsigned long int iRet=0;

printf("\n Enter your number :");
scanf("%d",&iNo);

iRet = Factorial(iNo);
printf("Factorial is : %ld \n",iRet);
return 0;
}

unsigned long int Factorial(int iValue)		//Defination
{
if (iValue<0)
{
iValue = -iValue;
}
unsigned long int iFact = 1;
int iCnt = 0;

/*for (iCnt = 1; iCnt<=iValue; iCnt++)
{
iSum = iSum * iCnt;
}*/

iCnt = 1;

while(iCnt<=iValue)

{
iFact = iFact * iCnt;
iCnt++;
}

return iFact;
}