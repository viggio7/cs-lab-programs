#include <stdio.h>

int main()
{
	int s;
	char c;
	FILE* fp1;
	fp1=fopen("DATA.txt","a+");
	fseek(fp1,0,0);
	while((c=getc(fp1))!=EOF)
		s+=(int)c;
	fprinf(fp1,"%d",s);
	fclose(fp1);
	return 0;
}
