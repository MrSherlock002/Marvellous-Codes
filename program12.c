//Prasad R. Bhosale
//Tuesday (08/09/2021)
//A program to find factors of a number.

#include <stdio.h>

void Display_Factor(int iValue);

int main()
{
int iNo= 0;
 
printf("\n Enter your number :");
scanf("%d",&iNo);

Display_Factor(iNo);


return 0;
}

void Display_Factor(int iValue)
{
int iCnt =0;
if (iValue < 0)
{
iValue = -iValue;
}

iCnt = 1;
while(iCnt<iValue)	//while(iCnt<iValue/2).....//This will reduce time complexity by 50%.
{
if(iValue%iCnt == 0)
{
printf("\n %d",iCnt);
}

iCnt++;
}
}

