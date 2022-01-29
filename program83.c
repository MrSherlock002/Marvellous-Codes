///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Tuesday (12/10/2021)
//  Problems on Bitwise Opetators. 
//  Program to print decimal,Hex,octal.
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

    printf("\n Its decimal format is : %d ",iValue);
    printf("\n Its Octal format is : %o ",iValue);
    printf("\n Its Hexadecimal format is : %x ",iValue);
    return 0;
}