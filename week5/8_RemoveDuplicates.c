#include <stdio.h>

int main(){
	int i,j,c;
	int a[8]={6,5,3,1,2,7,7,5};
	for(i=0;i<8;i++){
		c=0;
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				c++;
			}
		}
		if(c==0){
			printf("%d",a[i]);
		}
	}
	return 0;
}
