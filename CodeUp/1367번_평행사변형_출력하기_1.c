#include <stdio.h>
main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;n>=k;k++){
			printf("*");
		}
		printf("\n");
	}
}