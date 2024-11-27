#include <stdio.h>

int main(){
	int i,j,t;
	int a[7]={6,5,3,1,2,7,5};
	for(i=0;i<7;i++)
	{
		for(j=0;j<6-i;j++)
		{
			if(a[j+1]<a[j])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<7;i++)
	{
		if(a[i]!=(i+1))
			printf("%d",i+1);
	}
	return 0;
}
