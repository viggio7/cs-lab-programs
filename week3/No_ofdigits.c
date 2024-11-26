#include <stdio.h>

int main()
{
	int i,N=26780;
	for(i=0;N!=0;i++)
		N=N/10;
	printf("%d\n",i);
	return 0;
}
