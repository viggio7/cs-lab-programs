#include <stdio.h>

int main(){
	int a[7]={10,5,3,7,5,3,1};
	int i,j,c=0;
	for(i=0;i<7;i++){
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				printf("%d",a[i]);
				c=1;
			}
		}
	if(c!=0)
	break;
	}
	return 0;
}
