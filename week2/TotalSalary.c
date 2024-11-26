#include <stdio.h>

int main()
{
	int BasicSalary;
	float DA=35,HRA=25;
	printf("Enter basic salary \n");
	scanf("%d",&BasicSalary);
	printf("total salary = %f",(DA+HRA/100)*BasicSalary);
	return 0;
}
