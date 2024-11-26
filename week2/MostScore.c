#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter 3 bowling techniques point value\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
	printf("%d is largest",a);
	else if (b>a && b>c)
	printf("%d  is largest",b);
	else if (c>b && c>a)
	printf("%d  is largest",c);
	return 0;
}
