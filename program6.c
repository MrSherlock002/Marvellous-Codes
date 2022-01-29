//Prasad R. Bhosale
//Tuesday (07/09/2021)

#include <stdio.h>

int Reverse(int iValue)
{
int iCnt = 0;
if(iValue<0)
{

iValue=-iValue;

} 
for (iCnt=iValue; iCnt>0; iCnt--)
{
printf("%d\t",iCnt);
}
return 0;
}


int main()

{
int iNo;
printf("\n Enter your number :-");
scanf("%d",&iNo);

Reverse(iNo);
return 0;
}