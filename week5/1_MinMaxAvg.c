#include <stdio.h>

int main()
{
	int i,j,t;
	int a[5]={6,5,3,1,2};
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(a[j+1]<a[j])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	printf("min=%d\nmax=%d\navg=%d\n",a[0],a[4],(a[0]+a[1]+a[2]+a[3]+a[4])/5);
	return 0;
}
