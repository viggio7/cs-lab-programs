#include <stdio.h>

int main(){
	int i,j,s,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<i+1;j++){
			printf("*");
		}
		for(s=0;s<2*n-2*i-2;s++){
			printf(" ");
		}
		for(j=0;j<i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf("*");
		}
		for(s=0;s<2*i;s++){
			printf(" ");
		}
		for(j=0;j<n-i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
