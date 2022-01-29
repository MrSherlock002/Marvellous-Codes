//Prasad R. Bhosale
//Monday (20/09/2021)
//A program for to print pattern .
//using two functions.

#include<stdio.h>

void Display(int iNo)
{
int static iCnt;

for(iCnt = 1; iCnt<=iNo;iCnt++)
if(iCnt%2==0)
{
{
printf("#\t");
}
}
else
printf("*\t");

}


int main()
{
int iValue =0;

printf("\n Enter No:");
scanf("%d",&iValue);

Display(iValue);
return 0;
}