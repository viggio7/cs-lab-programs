#include <stdio.h>

int main()
{
	int p=20,q=30,r=20;
	if (p==q && q==r && r==p)
		printf("equilateral triangle");
	else if (( p==q && q==r || r!=p)||( r==q && p==r || q!=p)||( p==r && q==r || q!=p))
		printf("isosceles triangle");
	else
		printf("scalene triangle");
	return 0;
}
