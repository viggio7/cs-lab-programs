#include <stdio.h>

int main()
{
	char c;
	FILE* fp1;
	fp1=fopen("INPUT.txt","r");
	while((c=getc(fp1))!=EOF)
		printf("%d\n",c);
	fclose(fp1);
	return 0;
}
