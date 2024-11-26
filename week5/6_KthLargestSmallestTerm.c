#include <stdio.h>

int main(){
	int i,j,t,k;
	int a[5]={6,5,3,1,2};
	printf("enter k");
	scanf("%d",&k);
	for(i=0;i<5;i++){
		for(j=0;j<4-i;j++){
			if(a[j+1]<a[j]){
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n%dth largest term=%d\t%dth smallest term=%d\n",k,a[5-k],k,a[k-1]);
	return 0;
}
