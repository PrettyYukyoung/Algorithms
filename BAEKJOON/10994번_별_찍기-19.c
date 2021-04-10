#include <stdio.h>
main()
{
	int n,i,j,k=0,z=0;
	scanf("%d",&n);
	
	for(int star=0;star<(n-1)*4+1;star++){
		printf("*");
	}
	printf("\n");
	for(i=2;i<=2*n-1;i++){
		for(j=0;j<=k;j++){
			printf("* ");
		}
		if(i%2==0){
			for(j=0;j<(n-1)*4-i*2+1;j++){
				printf(" ");
			}
			
		}
		else if(i%2!=0){
			for(j=0;j<=(n-1)*4-i*2+2;j++){
				printf("*");
			}
			
		}
		for(j=0;j<=k;j++){
			printf(" *");
		}
		if(i%2!=0){
			k++;
		}
		printf("\n");
		
	}
	k-=1;
	for(i=2;i<2*n-1;i++){
		for(j=0;j<=k;j++){
			printf("* ");
		}
		if(i%2==0){
			for(j=0;j<1+z*2;j++){
				printf(" ");
			}
			
		}
		else if(i%2!=0){
			for(j=0;j<3+z*2;j++){
				printf("*");
			}
			
		}
		for(j=0;j<=k;j++){
			printf(" *");
		}
		if(i%2==0){
			k--;
		}
		z++;
		printf("\n");
		
	}
	if(i==2*n-1){
		for(int star=0;star<(n-1)*4+1;star++){
		printf("*");
	}
	}
}