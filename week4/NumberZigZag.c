#include <stdio.h>

int main(){
	int i,j,s,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if((i+1)%2!=0){
			printf("%d",i+1);
		}
		for(j=0;j<6;j++){
			printf("%d",i);
		}
		if((i+1)%2==0){
			printf("%d",i+1);
		}
		printf("\n");
	}
	return 0;
}
