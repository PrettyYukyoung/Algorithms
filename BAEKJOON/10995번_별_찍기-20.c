#include <stdio.h>
main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			for(j=1;j<n*2+1;j++){
				if(j%2==0){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			if(i!=n)
				printf("\n");
			}
			
		if(i%2!=0){
			for(j=1;j<n*2+1;j++){
				if(j%2==0){
					printf(" ");
				}
				else{
					printf("*");
				}
			}
			if(i!=n)
				printf("\n");
		}
		
	}	
}