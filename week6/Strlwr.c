#include <stdio.h>

int main()
{	
	int i;
	char str[10]="OmegA";
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]<=90&&str[i]>=65)
			str[i]=str[i]+32;
	}
	for(i=0;str[i]!='\0';i++)
		printf("%c",str[i]);
	return 0;
}
