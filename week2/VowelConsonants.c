#include <stdio.h>

int main()
{
	char a;
	scanf("%c",&a);
	if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
		printf("vowel");
	else
		printf("consonant");
	return 0;
}
