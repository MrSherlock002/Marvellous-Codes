//Prasad R. Bhosale
//Tuesday (21/09/2021)
//A program for to print pattern .
//Using two functions.
//Using multiple (intitialization,exepression) in for loop.

#include<stdio.h>

void Display(int iNo)
{
int static iCnt;
char ch = '\0';

for(iCnt = 1,ch = 'A'; iCnt<=iNo;iCnt++,ch++)
{
printf(" %c",ch);
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