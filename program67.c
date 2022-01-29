///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (29/09/2021)
//  Problems on character 
//  Take one character from user and check whether it is capital or not. 
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char c)
{
if((c>='A')&&(c<='Z'))
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

bRet=CheckCapital(ch);

if(bRet == true)
{
printf("It is Capital");
}
else
{
printf("It is not capital");
}
return 0;
}