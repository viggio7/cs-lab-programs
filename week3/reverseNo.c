#include <stdio.h>

int main()
{
	int d,n=2780;
	while(n!=0){
		d=n%10;
		printf("%d",d);
		n=n/10;
	}
	return 0;
}
