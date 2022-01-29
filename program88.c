///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Tuesday (12/10/2021)
//  Problems on Bitwise Opetators. 
//  Program to check whether input's desired bit is ON or OFF.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
    if(iPos < 1 || (iPos-1))
    {
        return false;
    }
    UINT iMask = 0x00000001;
    int iResult = 0;

    iMask = iMask <<(iPos -1);
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    return false;
}



int main()
{
    UINT iValue =0,iBit=0;
    bool bRet =false;

    printf("\n Enter Number :- ");
    scanf("%d",&iValue);

    printf("\n Enter position :- ");
    scanf("%d",&iBit);

    bRet=CheckBit(iValue,iBit);

    if(bRet == true)
    {
        printf("\n Given %d bit is ON",iBit);
    }
    else
    {
        printf("\n Given %d bit is OFF");
    }

    return 0;
}