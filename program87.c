///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Tuesday (12/10/2021)
//  Problems on Bitwise Opetators. 
//  Program to check whether input's first four bits are ON or OFF.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x0000000F;
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
        printf("\n Last 4 bits are ON");
    }
    else
    {
        printf("\n Last 4 bits are OFF");
    }

    return 0;
}