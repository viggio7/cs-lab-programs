#include <stdio.h>

int main()
{	
	int i;
	char str[10]="omega";
	for(i=0;str[i]!='\0';i++)
		continue;
	printf("%d",i);
	return 0;
}
