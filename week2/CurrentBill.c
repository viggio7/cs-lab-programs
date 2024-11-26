#include <stdio.h>

int main()
{
	int units,rate=50;
	float SurCharge=15;
	printf("Enter units consumed \n");
	scanf("%d",&units);
	printf("total bill = %f",(SurCharge/100)*units*rate);
	return 0;
}
