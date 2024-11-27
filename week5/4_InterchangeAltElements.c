#include <stdio.h>

int main(){
	int i,j,t;
	int a[6]={6,5,3,1,2,4};
	for(i=0;i<6;i+=2){
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;
		}
	for(i=0;i<6;i++){
		printf("%d",a[i]);
	}
	return 0;
}
