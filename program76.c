///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Monday (11/10/2021)
//  Problems on character 
//  display count of vowels.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(char *str)
{

    int iCnt = 0;
    if(str==NULL)
    {
        return -1;
    }
    while(*str!='\0')
    {
        if((*str=='a')||(*str=='A') || (*str=='e')||(*str=='E') || (*str=='i')||(*str=='I') || (*str=='o')||(*str=='O') || (*str=='u')||(*str=='U'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{

char Arr[30];
int iRet = 0;

printf("\n Enter String ");
scanf("%[^'\n']s",Arr);

iRet = Count(Arr);

printf("\n Number of Vowels are : %d",iRet);

    return 0;
}
