// Program to check whether input is alphabet or not

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
	if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
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
	
	bRet=ChkAlpha(cValue);
	
	if(bRet==true)
	{
		printf("It is a Character");
	}
	else
	{
		printf("It is not a Character");
	}
	
	return 0;
}