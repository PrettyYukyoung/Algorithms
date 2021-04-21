#include <stdio.h>
main()
{
	int n,star,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		printf("*");
		if(i==0){
			for(j=0;j<n-2;j++)
			{
				printf("*");
			}
		}
		else
		{
			for(j=0;j<n-2;j++)
			{
				printf(" ");
			}
		}
		printf("*");
		for(j=0;j<n+(n-3)-(i*2);j++){
			printf(" ");
		}
		if(i==0){
			for(j=0;j<n;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{	
			printf("*");
			for(j=0;j<n-2;j++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
		
	}
	for(i=0;i<n-1;i++){
		printf(" ");
	}
	printf("*");
	for(i=0;i<n-2;i++){
		printf(" ");
	}
	printf("*");
	for(i=0;i<n-2;i++){
		printf(" ");
	}
	printf("*\n");
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-2;j++)
		{
			printf(" ");
		}
		if(i==n-2){
			for(j=0;j<n;j++)
			{
				printf("*");
			}
			for(j=0;j<1+i*2;j++){
				printf(" ");
			}
			for(j=0;j<n;j++)
			{
				printf("*");
			}
		}
		else{
			
			printf("*");
			for(j=0;j<n-2;j++){
				printf(" ");
			}
			printf("*");
			for(j=0;j<1+i*2;j++){
				printf(" ");
			}
			printf("*");
			for(j=0;j<n-2;j++){
				printf(" ");
			}
		printf("*\n");
	}}
}