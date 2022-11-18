// Program to check whether input character is capital or not

#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
	if((ch>='A')&&(ch<='Z'))
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
	
	bRet=ChkCapital(cValue);
	
	if(bRet==true)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	return 0;
}