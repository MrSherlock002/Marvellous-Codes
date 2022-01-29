///////////////////////////////////////////////////////////////////////////////////
//
//Prasad R. Bhosale
//Monday (27/09/2021)
// Accept size of Array & Array from user and return the sum of odd elements in that array. 
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int OddSum(int Arr[],int iSize)
{
int static iCnt,i,iSum;

for(i=0; i<iSize; i++)
{
if(Arr[i]%2==1)
{
iSum = iSum +Arr[i];
}
}

return iSum;
}



int main()
{

int static iSize,i,iRet,iLength;
int *ptr = NULL;

printf("\n Enter the size of Array :");
scanf("%d",&iLength);

ptr =(int *)malloc(iSize*(sizeof(int)));

printf("\n Enter Elements of Array :");
for(i=0; i<iLength; i++)
{
scanf("%d",&ptr[i]);
}

iRet = OddSum(ptr,iLength);

printf("\n Sum of odd elements are %d:",iRet);

free(ptr);
return 0;
}