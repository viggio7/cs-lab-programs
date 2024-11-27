#include <stdio.h>

int main()
{
	int dup;
	char c;
	FILE* fp1;
	FILE* fp2;
	fp1=fopen("INPUT.txt","r");
	fp2=fopen("COPY.txt","r");
	while((c=getc(fp1))!=EOF)
		if(c!=(getc(fp2)))
			dup++;
	if(dup==0)
		printf("0");
	else
		printf("1");
	fclose(fp1);
	fclose(fp2);
	return 0;
}
