#include <stdio.h>

int main()
{	
	int i,l=0;
	char t;
	char str[10]="computer";
	for(i=0;str[i]!='\0';i++)
		l++;
	for(i=0;i<l/2;i++)
	{
		t=str[l-1-i];
		str[l-1-i]=str[i];
		str[i]=t;
	}
	for(i=0;str[i]!='\0';i++)
		printf("%c",str[i]);
	return 0;
}
