//Prasad R. Bhosale
//Wednesday (22/09/2021)
// Accept 5 numbers from user and perform addition of that numbers.

#include<stdio.h>

int Addition(int iBrr[])
{
int static iSum,iCnt;
for(iCnt=0;iCnt<5;iCnt++)
{
iSum=iSum+iBrr[iCnt];
}
return iSum;
}



int main()
{

int Arr[5];   //Array of 5 integers
int static i,iRet;

printf("\n Enter No :");

for(i=0;i<5;i++)
{
scanf("%d",&Arr[i]);
}
iRet = Addition(Arr);
printf("\nAddition = %d",iRet);
return 0;
}