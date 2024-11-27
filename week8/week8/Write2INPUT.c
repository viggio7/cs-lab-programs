#include <stdio.h>

int main()
{
	char s[100],q[100];
	printf("enter string\n");
	scanf("%s",&s);
	FILE* fp;
	fp=fopen("INPUT.txt","w+");
	fprintf(fp,"%s",s);
	fseek(fp,0,0);
	fscanf(fp,"%s",&q);
	printf("%s",q);
	fclose(fp);
	return 0;
}

