#include <stdio.h>

int main()
{	
	int i;
	char t[]={'h'};
	char str[20]="hello college";
	for(i=0;str[i]!='\0';i++);
	{
		if(str[i]==t)
		{
			printf("%d",i);
		}
	}
	return 0;
}
