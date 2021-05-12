#include <stdio.h>
int sum(int a,int b,int c){
	int result=a*b+c;
	return result;
}
main(){
	int n,i,q,w,e;
	
	scanf("%d",&q);
	scanf("%d",&w);
	scanf("%d",&e);
	scanf("%d",&n);
	int total=n;
	if(n==1){
		printf("%d",q);
	}
	else{
		for(i=2;i<=n;i++){
		total=sum(q,w,e);
		
		q=total;
	}
	printf("%d",total);
	}
	
}
