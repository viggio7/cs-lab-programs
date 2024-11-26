#include <stdio.h>

int main()
{
	float a;
	scanf("%f",&a);
	printf("length in meter is %f\n length in centimeter is %f\nlength in millimeter is %f",a*1000,a*100000,a*1000000);
	return 0;
}
