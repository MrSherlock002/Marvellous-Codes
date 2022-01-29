///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Monday (11/10/2021)
//  Problems on character 
//  display count repeated characher.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFreq(char *str, char ch)
{

    int iCnt = 0;
    if(str==NULL)
    {
        return -1;
    }
    while(*str!='\0')
    {
        if(*str==ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{

char Arr[30],cValue='\0';
int iRet = 0;

printf("\n Enter String ");
scanf("%[^'\n']s",Arr);

printf("\n Enter character ");
scanf(" %c",&cValue);

iRet = CountFreq(Arr,cValue);

printf("\n Number of Vowels are : %d",iRet);

    return 0;
}
