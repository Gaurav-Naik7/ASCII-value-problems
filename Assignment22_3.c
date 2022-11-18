// Program to check whether input  is Digit or not

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
	if((ch>='0')&&(ch<='9'))
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
	char cValue='\0';
	bool bRet=false;
	
	printf("Enter the charecter: ");
	scanf("%c",&cValue);
	
	bRet=ChkDigit(cValue);
	
	if(bRet==true)
	{
		printf("It is a Digit");
	}
	else
	{
		printf("It is not a Digit");
	}
	
	return 0;
}