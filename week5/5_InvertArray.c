#include <stdio.h>

int main()
{
	int i,t;
	int a[5]={6,5,3,1,2};
	for(i=0;i<=2;i++)
	{
		t=a[4-i];
		a[4-i]=a[i];
		a[i]=t;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
