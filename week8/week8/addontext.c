#include <stdio.h>

int main()
{
	int dup;
	char c;
	FILE* fp1;
	FILE* fp2;
	fp1=fopen("INPUT.txt","r");
	fp2=fopen("BASE.txt","a");
	fseek(fp2,0,2);
	while((c=getc(fp1))!=EOF)
		fputc(c,fp2);
	fclose(fp1);
	fclose(fp2);
	return 0;
}