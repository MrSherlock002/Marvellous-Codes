///////////////////////////////////////////////////////////////////////////////////
//
//Prasad R. Bhosale
//Monday (27/09/2021)
// Accept size of Array & Array from user and return smallest element in that array. 
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Max(int Arr[], int iSize)
{
int static i,iMin;
iMin = Arr[0];
for(i = 1; i<iSize; i++)
{
if(Arr[i]<iMin)
{
iMin = Arr[i];
}

}

return iMin;
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

printf("\n Min = %d:",iRet);

free(ptr);
return 0;
}