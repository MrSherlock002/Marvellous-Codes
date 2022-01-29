//Prasad R. Bhosale
//Tuesday (21/09/2021)
//A program for to print pattern .
//using two functions.

#include<stdio.h>

void Display(int iNo)
{
int static iCnt;
char ch='a';

for(iCnt = 1; iCnt<=iNo;iCnt++)
{
printf(" %c",ch);
ch++;

}

}


int main()
{
int iValue =0;

printf("\n Enter No:");
scanf("%d",&iValue);

Display(iValue);
return 0;
}