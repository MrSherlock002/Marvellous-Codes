///////////////////////////////////////////////////////////////////////////////////
//
//Prasad R. Bhosale
//Monday (27/09/2021)
// Accept size of Array & Array from user and return the count of elements in between 10 to 20 in that array. 
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Count(int Arr[],int iSize)
{
int static iCnt,i;

for(i=0; i<iSize; i++)
{
if((Arr[i]>10)&& (Arr[i]<20))
{
iCnt++;
}
}

return iCnt;
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

iRet = Count(ptr,iLength);

printf("\n Count of elements greater than 10 and less than 20 = %d:",iRet);

free(ptr);
return 0;
}