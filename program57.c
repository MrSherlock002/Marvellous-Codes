///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Tuesday (28/09/2021)
//  Accept size of Array & Array from user and return last index of searching element in that array. 
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CheckIndex(int Arr[],int iLength,int iSearch)
{
int static i;
int iIndex = -1;
for(i=0; i<iLength; i++)
{
if(Arr[i]==iSearch)
{
iIndex = i;
}
}

return iIndex;
}




int main()
{
int static iSize,i,iRet,iSE;
int *ptr;

printf("\n Enter size of the array :");
scanf("%d",&iSize);

printf("\n Enter searching element :");
scanf("%d",&iSE);

ptr = (int*)malloc(iSize*sizeof(int));

printf("\n Enter Elements :");
for(i=0; i<iSize; i++)
{
scanf("%d",&ptr[i]);
}



iRet =CheckIndex(ptr,iSize,iSE);

printf("\n Index of %d element in array = %d ",iSE,iRet);

free(ptr);
return 0;
}