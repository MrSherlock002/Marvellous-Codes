//Prasad R. Bhosale
//Wednesday (22/09/2021)
// Accept numbers from user and perform addition of that numbers using pointer.

#include<stdio.h>
#include<stdlib.h>

int Addition(int *Brr,int iSize)
//int Addition(int iBrr[])
{

int static iSum,iCnt;
for(iCnt=0; iCnt<iSize; iCnt++)
{
iSum=iSum+(*Brr);  //Best way to achieve impression.   
Brr++;
}
return iSum;
}

int main()
{

int *Arr=NULL;   //Array of 5 integers
int static i,iRet,iLength;
printf("\n Enter No of elements");
scanf("%d",&iLength);

Arr=(int *)malloc(sizeof(int)*iLength);

printf("\n Enter No :");

for(i=0;i<iLength;i++)
{
scanf("%d",&Arr[i]);
}
iRet = Addition(Arr,iLength);
printf("\nAddition = %d",iRet);
free(Arr);
return 0;
}