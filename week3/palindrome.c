#include <stdio.h>
#include <math.h>

int main(){
	int a,d,i=0,j,k,m,n=1221;
	k=n;
	m=n;
	while(k!=0){
		k=k/10;
		i++;
	}
	j=pow(10,i-1);
	while(n!=0){
		d=n%10*j;
		j=j/10;
		n=n/10;
		a=a+d;
	}
	printf("%d\n%d\n",m,a);
	if(a==m)
		printf("it is a palindrome");
	else
		printf("its not a palindrome");
	return 0;
}
