// Program to accept character from user and check whether it is special character or not

#include<stdio.h>
#include<stdbool.h>

bool Display(char ch)
{

	if((ch>='!'&& ch<='.') || (ch>=':'&& ch<='@') || (ch>='['&& ch<='`'))
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
	bool bRet;

	printf("Enter the charecter: ");
	scanf("%c",&cValue);
	
	bRet=Display(cValue);
	
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