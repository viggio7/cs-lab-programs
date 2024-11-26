#include <stdio.h>

int main(){
	int i,j,s,n;
	scanf("%d%d",&s,&n);
	for(i=0;i<n;i++){
		for(j=0;j<i+1;j++){
			printf("%d ",s);
		}
		printf("\n");
		s++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf("%d ",s-1);
		}
		printf("\n");
		s--;
	}
	return 0;
}
