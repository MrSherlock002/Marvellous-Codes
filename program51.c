///////////////////////////////////////////////////////////////////////////////////
//
//Prasad R. Bhosale
//Monday (27/09/2021)
// Accept size of Array & Array from user and return largest element in between 10 to 20 in that array. 
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Max(int Arr[], int iSize)
{
int static i,iMax,iTemp;
iTemp = Arr[0];
for(i = 0; i<iSize; i++)
{
if(Arr[i]>iTemp)
{
iTemp = Arr[i];
}

}

return iTemp;
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

printf("\n Max = %d:",iRet);

free(ptr);
return 0;
}