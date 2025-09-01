

//Write a C Program to print a character in double quotes.
#include<stdio.h>
int main()
{
    char a ;
	printf("Enter a character:");
	scanf("%c''\n'",&a);
	printf("\"%c\"\n",a);
	return 0;
}