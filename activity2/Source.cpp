#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	char str_in[999], * str;
	int i, n = 0;
	scanf("%s", str_in);
	str = str_in;
	for (i = 0;str[i] != '\0';i++) 
	{
		n = n + 1;
	}
	for (i = 0;str[i] != '\0';i++) 
	{
		if (str[i] != str[n - 1 - i]) 
		{
			printf("Not Palindrome");break;
		}
		if (i == n - 1) 
		{
			printf("Palindrome");
		}
	}
	return 0;
}