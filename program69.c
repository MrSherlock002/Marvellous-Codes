///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (29/09/2021)
//  Problems on character 
//  Take one character from user and check whether it is digit or not. 
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char c)
{
if((c>='0')&&(c<='9'))
{
return true;
}
else
{
return false;
}


}



int main()
{
char ch = '\0';
bool bRet = false;

printf("Enter Character ");
scanf("%c",&ch);

bRet=CheckDigit(ch);

if(bRet == true)
{
printf("It is digit");
}
else
{
printf("It is NOT digit");
}
return 0;
}