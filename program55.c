///////////////////////////////////////////////////////////////////////////////////
//
//Prasad R. Bhosale
//  Monday (27/09/2021)
// Accept size of Array & Array from user and return smallest element in that array. 
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckNumber(int Arr[], int iSize,int iNo)
{
int static i;

for(i = 1; i<iSize; i++)
{
if(Arr[i]==iNo)
{
break;
}
}
if(iSize==i)
{
return false;
}
else
{
return true; 
}
}




int main()
{

int static iSize,i,iLength,iSE;
int *ptr = NULL;
bool bRet = false;

printf("\n Enter the size of Array :");
scanf("%d",&iLength);

printf("\n Enter the searching element :");
scanf("%d",&iSE);



ptr =(int *)malloc(iSize*(sizeof(int)));

printf("\n Enter Elements of Array :");
for(i=0; i<iLength; i++)
{
scanf("%d",&ptr[i]);
}

bRet = CheckNumber(ptr,iLength,iSE);

if(bRet == true)
{
printf("\n Searching element %d is present",iSE);
}
else
{
printf("\n Searching element %d is NOT present",iSE);
}

free(ptr);
return 0;
}