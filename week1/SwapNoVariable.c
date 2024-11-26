#include <stdio.h>

int main()
{
	int a,b;
	a=60;
	b=30;
	printf("%d\t%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d\t%d",a,b);
	return 0;
}
