// Program to accept character from user and display its ASCII value in decimal, octal and hexadecimal format

#include<stdio.h>

void Display(char ch)
{
	printf("Decimal %d\n",ch);
	printf("Octal %o\n",ch);
	printf("Hexadecimal OX%x\n",ch);
}

int main()
{
	char cValue='\0';

	printf("Enter the charecter: ");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}