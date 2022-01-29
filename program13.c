//Prasad R. Bhosale
//Tuesday (08/09/2021)
//A program to find perfect number.

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
int iCnt =0,iSum = 0;
if (iValue < 0)
{
iValue = -iValue;
}

iCnt = 1;
while(iCnt<iValue)
{
if(iValue%iCnt == 0)
{
printf("\n %d",iCnt);
iSum = iSum + iCnt;
}

iCnt++;
}
if (iSum == iValue)
{
printf("\n Given %d number is perfect number",iValue);
}
}

