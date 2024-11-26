#include <stdio.h>

int main()
{
	int i,m,l;
	char str[10]="malayalam";
	for(i=0;str[i]!='\0';i++)
		l++;
	for(i=0;i<l/2;i++)
	{
		if(str[i]==str[l-i])
			m++;
	}
	if(m==l/2)
		printf("the string is a palindrome");
	else
		printf("the string is not a palindrome");
	return 0;
}
