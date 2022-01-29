//Prasad R. Bhosale
//Tuesday (07/09/2021)
//A program to add sum recursively.

#include <stdio.h>

int Sum(int iValue)
{
int iCnt = 0;
int sum = 0;
if(iValue<0)
{

iValue=-iValue;

} 
for (iCnt=iValue; iCnt>0; iCnt--)
{
printf("%d\t",iCnt);
sum = sum +iCnt;
}
printf("\nTotal sum = %d",sum);
return 0;
}


int main()

{
int iNo;
printf("\n Enter your number :-");
scanf("%d",&iNo);

Sum(iNo);
return 0;
}