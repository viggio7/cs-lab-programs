#include <stdio.h>

int main()
{
	int s=0,d,n=2780;
	while(n!=0){
		d=n%10;
		s=s+d;
		n=n/10;
	}
	printf("%d",s);
	return 0;
}
