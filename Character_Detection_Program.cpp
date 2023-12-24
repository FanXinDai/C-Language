#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='0'&&ch<='9')
	{    
		printf("Input Character is an Arabic Numeral.");
	}
	else if(ch>='A'&&ch<='Z')
	{         
		printf("Enter characters as uppercase letters.");
	}
	else if(ch>='a'&&ch<='z')
	{         
		printf("Enter characters as lowercase letters.");
	}
	else 
	{
		printf("Your input is wrong");
	}
	return 0;
 } 
