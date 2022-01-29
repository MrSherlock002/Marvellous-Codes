///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (29/09/2021)
//  Problems on character 
//  Take one character from user and check whether it is small or not. 
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char c)
{
if((c>='a')&&(c<='z'))
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

bRet=CheckSmall(ch);

if(bRet == true)
{
printf("It is small");
}
else
{
printf("It is not small");
}
return 0;
}