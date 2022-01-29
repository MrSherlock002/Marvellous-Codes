///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Tuesday (12/10/2021)
//  Problems on Bitwise Opetators. 
//  Program to convert decimal to binary(right to left).
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void DisplayBinary(int iNo)
{
int iDigit =0;
while(iNo!=0)
{
iDigit = iNo%2;
printf("\t %d",iDigit);
iNo= iNo/2;

}

}


int main()
{
    int iValue =0;

    printf("\n Enter Number :- ");
    scanf("%d",&iValue);

    DisplayBinary(iValue);

    return 0;
}