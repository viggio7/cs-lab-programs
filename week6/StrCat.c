#include <stdio.h>

int main()
{	
	int i,l=0;
	char str1[10]="omega";
	char str2[15]="alpha";
	for(i=0;str1[i]!='\0';i++)
		l++;
	for(i=0;str2[i]!='\0';i++)
		str1[l+i]=str2[i];
	for(i=0;str1[i]!='\0';i++)
		printf("%c",str1[i]);
	return 0;
}
