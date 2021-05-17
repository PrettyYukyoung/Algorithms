#include <stdio.h>
main(){
	int i,j,star,height,k;
	scanf("%d %d",&height,&star);
	for(k=0;k<star;k++){
		for(i=0;i<height;i++)
		{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		printf("*\n");
		}
		for(i=1;i<height;i++){
			for(j=0;j<height-(i+1);j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
	
}