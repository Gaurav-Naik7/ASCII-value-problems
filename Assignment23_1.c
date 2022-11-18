// Program to display ASCII table.

#include<stdio.h>

void DisplayASCII()
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<=255;iCnt++)
	{
		printf("symbol: %c decimal: %d hexadecimal: %x octal: %o \n",iCnt,iCnt,iCnt,iCnt);
	}
}

int main()
{
	DisplayASCII();
	return 0;
}