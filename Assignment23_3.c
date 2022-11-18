// Program to accept character from user.If it is capital then display all the characters from input characters till Z.
// If character is small then print all characters in reverse order. In other cases return

#include<stdio.h>

void Display(char ch)
{

	if(ch>='A'&& ch<='Z')
	{
		while(ch<='Z')
		{
			printf("%c\t",ch);
			ch++;
		}
	}
	else if(ch>='a'&& ch<='z')
	{
		while(ch>='a')
		{
			printf("%c\t",ch);
			ch--;
		}
	}
	else
	{
		return;
	}
}

int main()
{
	char cValue='\0';

	printf("Enter the charecter: ");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}