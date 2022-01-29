//Prasad R. Bhosale
//Tuesday (08/09/2021)
//A program to find Even Odd.

#include <stdio.h>
#include<stdbool.h>    //For bool datatype


bool CheckEven(int);	//Declaration

int main()

{
int iNo= 0;
//bool bRet = false;
bool bRet;
 
printf("\n Enter your number :");
scanf("%d",&iNo);

bRet = CheckEven(iNo);
if (bRet == true)
{
printf("\n Given %d number is even",iNo);
}
else
{
printf("\n Given %d number is not even",iNo);
}

return 0;
}



bool CheckEven(int iValue)  		//defination
{
if (iValue % 2 == 0)
{
return true;
}
else
{
return false;
}
}