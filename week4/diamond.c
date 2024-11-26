#include <stdio.h>

int main(){
	int i,j,m,s,n;
	scanf("%d",&n);
	if(n%2!=0){
		m=n/2+1;
		for(i=0;i<m;i++){
			for(s=0;s<m-i-1;s++){
				printf("  ");
		    }
			for(j=0;j<2*i+1;j++){
				printf("* ");
			}
			printf("\n");
		}
		for(i=0;i<m-1;i++){
			for(s=0;s<i+1;s++){
				printf("  ");
			}
			for(j=0;j<n-2-2*i;j++){
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}
