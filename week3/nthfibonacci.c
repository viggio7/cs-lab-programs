#include <stdio.h>

int main()
{
	int s,x=0,y=1,i,n=4;
	while(i<=(n-3)){
		s=x+y;
		x=y;
		y=s;
		i++;
	}
	printf("%d",s);
	return 0;
}
