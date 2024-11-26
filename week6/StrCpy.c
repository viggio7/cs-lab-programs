#include <stdio.h>

int main()
{	
	int i;
	char str1[10]="omega";
	char str2[12];
	for(i=0;str1[i]!='\0';i++)
		str2[i]=str1[i];
	for(i=0;str2[i]!=0;i++)
		printf("%c",str2[i]);
	return 0;
}
