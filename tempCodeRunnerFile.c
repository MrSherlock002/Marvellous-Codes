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

bool CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask = iNo<<iPos;
    int iResult = 0;
    iResult = iNo & iMask;

    if(iResult == iMask)