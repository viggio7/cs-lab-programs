#include <stdio.h>

int main()
{
	int i=0;
	FILE* fp;
	FILE* fp1;
	FILE* fp2;
	fp=fopen("DATA.txt","r");
	fp1=fopen("ODD.txt","w");
	fp2=fopen("EVEN.txt","w");
	
	while((i=getc(fp))!=EOF)
	{
		if(((int)i%2)==0)
			putw(i,fp2);
		else
			putw(i,fp1);
	}
	fclose(fp);
	fclose(fp1);
	fclose(fp2);
	return 0;
}

