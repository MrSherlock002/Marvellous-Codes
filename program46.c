///////////////////////////////////////////////////////////////////////////////////
//
//Prasad R. Bhosale
//Monday (27/09/2021)
// Accept size of array from user and then accept Array from user and return the average of array. 
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

float Avg(int Arr[],int iLength)
{

int static iSum,i;
float fResult = 0.0f;

for(i=0; i<iLength; i++)
{
iSum = iSum + Arr[i];
}

fResult =(float)iSum / (float)iLength;  	//Explicit typecasting

return fResult;
}


int main()
{

int static iSize,i;
float fRet = 0.0f;
int *ptr = NULL;

printf("\n Enter the size of Array :");
scanf("%d",&iSize);

ptr =(int *)malloc(iSize*(sizeof(int)));

printf("\n Enter Elements of Array :");
for(i=0; i<iSize; i++)
{
scanf("%d",&ptr[i]);
}

for(i=0; i<iSize; i++)
{
printf("\n %d",ptr[i]);
}

fRet = Avg(ptr,iSize);

printf("\n Average is %.2f :",fRet);

free(ptr);
return 0;
}