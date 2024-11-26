#include <stdio.h>

int main()
{
	int i,j,a,b,l;
	char str1[10];
	char str2[10];
	scanf("%s",&str1);
	fflush(stdin);
	scanf("%s",&str2);
	for(i=0;str1[i]!='\0';i++)
		a++;
	for(j=0;str2[j]!='\0';j++)
		b++;
	if(a!=b)
		printf("The strings are not equal");
	else
	{
		for(i=0;i<a;i++)
			if(str1[i]==str2[i])
				l++;
			else
			{
				printf("the strings are not equal");
				break;
			}
	}
	if(l==a);
		printf("the strings are equal");
	return 0;
}
