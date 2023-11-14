#include<stdio.h>
int main(){
	int n, i;
	printf("Bang cuu chuong\n");
	for(n=1; n<=9; n++){
		for(i=1; i<=10; i++){
			int m=n*i;
			printf("%d * %d = %d\n", n, i, m);
		}
	}
	
	return 0;
}
