#include <stdio.h>
main(){
	int i,n,j;
	scanf("%d",&n);
	for(i=1;i<=9;i++){
		for(j=1;j<=(n*i);j++){
			printf("*");
		}
		printf("\n");
	}
}