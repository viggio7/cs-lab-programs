#include <stdio.h>

int main(){
	int i,j,s=1,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n/2+1;j++){
			printf("%d ",s);
			s++;
		}
		printf("\n");
	}
	return 0;
}
