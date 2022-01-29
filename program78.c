///////////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Monday (11/10/2021)
//  Problems on character 
//  display count repeated characher.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
char *start = NULL;
char *end = NULL;
start = str;
end = str;
while(*end !='\0')
{
    end++;
}
end--;

while(start<end)
{
    if(*start != *end)
    {
        break;
    }
    start++;
    end--;
}
if(start<end)
{
    return false;
}
else
{
    return true;
}

}



int main()
{

char Arr[30],cValue='\0';
bool bRet = false;

printf("\n Enter String ");
scanf("%[^'\n']s",Arr);


bRet = CheckPallindrome(Arr);

if(bRet==true)
{
    printf("\n It is Pallindrome ");
}
else
{
    printf("\n It is NOT Pallindrome ");
}

    return 0;
}
