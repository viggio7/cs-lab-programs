#include <stdio.h>

int main()
{
	int a=3,b=5,c=2;
	if (a>b && a>c)
	printf("%d a is greatest",a);
	if (b>a && b>c)
	printf("%d a is greatest",b);
	if (c>b && c>a)
	printf("%d a is greatest",c);
	return 0;
}
