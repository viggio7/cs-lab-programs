#include <stdio.h>

int main(){
	int i,j,s,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<i+1;j++){
			printf("%c ",i+65);
		}
		printf("\n");
	}
	return 0;
}
