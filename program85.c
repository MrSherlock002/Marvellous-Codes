///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Tuesday (12/10/2021)
//  Problems on Bitwise Opetators. 
//  Program to check input's whether 21th bit is ON or OFF.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x100000;
    int iResult = 0;
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    return false;
}



int main()
{
    UINT iValue =0;
    bool bRet =false;

    printf("\n Enter Number :- ");
    scanf("%d",&iValue);

    bRet=CheckBit(iValue);

    if(bRet == true)
    {
        printf("\n 21th bit is ON");
    }
    else
    {
        printf("\n 4th Bit is OFF");
    }

    return 0;
}