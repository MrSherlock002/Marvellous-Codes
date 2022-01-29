///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (29/09/2021)
//  Problems on character 
//  Take one character and if that character is Capital then convert it into Small.For other as it is.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


char CapitalToSmall(char c)
{
if((c>='A')&&(c<='Z'))
{
return c+32;
}
else
{
printf("\n ERROR 404 !!");
}


}



int main()
{
char ch = '\0';
char cRet = '\0';

printf("Enter Character ");
scanf("%c",&ch);

cRet=CapitalToSmall(ch);

printf("\n Small letter is: %c",cRet);

return 0;
}