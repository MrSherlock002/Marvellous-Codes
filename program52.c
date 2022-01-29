///////////////////////////////////////////////////////////////////////////////////
//
//Prasad R. Bhosale
//Monday (27/09/2021)
// Accept size of Array & Array from user and return diffrence between smallest and largest element in that array. 
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Max(int Arr[], int iSize)
{
int static i,iMax,iMin,iDiff;
iMin = Arr[0];
iMax = Arr[0];
for(i = 1; i<iSize; i++)
{
if(Arr[i]<iMin)
{
iMin = Arr[i];
}
else
{
iMax = Arr[i];
}
iDiff = iMax - iMin;
}

return iDiff;
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

iRet = Max(ptr,iLength);

printf("\n Diff = %d:",iRet);

free(ptr);
return 0;
}