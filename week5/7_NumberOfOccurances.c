#include <stdio.h>

int main(){
	int i,j=0,k;
	int a[8]={6,5,3,1,2,7,7,5};
	printf("enter number");
	scanf("%d",&k);
	for(i=0;i<8;i++){
		if(a[i]==k){
			j++;
		}
	}
	printf("%d",j);
	return 0;
}
