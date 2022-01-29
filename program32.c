//Prasad R. Bhosale
//Tuesday (21/09/2021)
//A program for to print pattern .
//Using two functions.

#include<stdio.h>

void Display()
{
int static i,j;
int iRow= 3;
int iCol = 4;

for (i=1;i<=iRow;i++)
{
for(j=1;j<=iCol;j++)
{
printf("\t *");
}
printf("\n");
}

}



int main()
{
Display();
return 0;
}