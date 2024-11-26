#include <stdio.h>
#include <math.h>

int main()
{
	float p,t,r,n,i;
	printf("Enter principle amount, time, rate and number of times compunded per year: \n");
	scanf("%f%f%f%f",&p,&t,&r,&n);
	printf("simple interest = %f",p*t*r/100);
	i=p*pow((1 + r/100*n),(n*t))-p;
	printf("compund interest = %f",i);
	return 0;
}
