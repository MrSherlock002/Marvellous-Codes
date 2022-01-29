///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (29/09/2021)
//  Problems on character 
//  Take one character and if that character is small then convert it into Capital.For other as it is.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


char SmallToCapital(char c)
{
if((c>='a')&&(c<='z'))
{
return c-32;
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

cRet=SmallToCapital(ch);

printf("\n Capital letter is: %c",cRet);

return 0;
}