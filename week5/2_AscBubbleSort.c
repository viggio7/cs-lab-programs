#include <stdio.h>

int main(){
	int i,j,t;
	int a[5]={6,5,3,1,2};
	for(i=0;i<5;i++){
		for(j=0;j<4-i;j++){
			if(a[j+1]<a[j]){
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	}
}
