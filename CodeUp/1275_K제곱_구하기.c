#include <stdio.h>
main(){
	int n,k,i,result;
	scanf("%d %d",&n,&k);
	result = n;
	if(k==0){
		printf("1");
	}
	else{
		for(i=1;i<k;i++){
		result=result*n;
	}
	printf("%d",result);
	}
	
	
}