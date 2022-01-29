//Prasad R. Bhosale
//Wednesday (22/09/2021)
// Accept 5 numbers from user and perform addition of that numbers.

#include<stdio.h>


int main()
{

int Arr[5];   //Array of 5 integers
int static i,iSum;

printf("\n Enter No :");
for(i=0;i<5;i++)
{
scanf("%d",&Arr[i]);
}
for(i=0;i<5;i++)
{
iSum=iSum+Arr[i];
}

printf("\nAddition = %d",iSum);
return 0;
}