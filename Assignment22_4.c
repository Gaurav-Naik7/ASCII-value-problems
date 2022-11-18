// Program to check whether input character is small case or not

#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
	if((ch>='a')&&(ch<='z'))
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
	
	bRet=ChkSmall(cValue);
	
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