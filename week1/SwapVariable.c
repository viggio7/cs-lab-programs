#include <stdio.h>

int main()
{
	int a,b,t;
	a=40;
	b=90;
	printf("%d\t%d\n",a,b);
	t=a;
	a=b;
	b=t;
	printf("%d\t%d\n",a,b);
}
