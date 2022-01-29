//Prasad R. Bhosale
//Wednesday (15/09/2021)
//A program for to print table of the given input.
//using two functions.

#include<stdio.h>
#include<stdbool.h>

void Display_Table( int);


int main()

{
int iValue=0;

printf("Enter Number to display its table :");
scanf("%d",&iValue);

Display_Table(iValue);
return 0;
}
void Display_Table( int iNo)
{
int iCnt =1;
int iTable = 0;

if (iNo == 0)
{
return;
}
if(iNo<0)
{
iNo = -iNo;
}
for (iCnt=1; iCnt<=10;iCnt++)
{
iTable = iNo * iCnt;
printf("\t %d",iTable);
}

}


