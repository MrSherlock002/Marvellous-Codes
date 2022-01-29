//Prasad R. Bhosale
//Tuesday (21/09/2021)
//A program for to print pattern .
//Using two functions.

#include<stdio.h>

void Display(int iRow,int iCol)
{
int static i,j;

for (i=1;i<=iRow;i++)
{
printf("\n");
for(j=1;j<=iCol;j++)
{
if(i==j)
{
printf("\t $");
}
else if(i>j)
{
printf("\t *");
}
else
{
printf("\t #");
}

}
}
}


int main()
{
int static iValue1,iValue2;
printf("\n Enter Row :");
scanf("%d",&iValue1);

printf("\n Enter Col :");
scanf("%d",&iValue2);
Display(iValue1,iValue2);
return 0;
}