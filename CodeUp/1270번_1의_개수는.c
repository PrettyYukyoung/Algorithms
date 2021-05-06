#include <stdio.h>
main(){
	int n,i,ten=1,cnt=1;
	scanf("%d",&n);
	int a=n%10;
	if(n%10==0 && n>=100){
		a=1;
	}
	int b=(n-a)/10;
	for(i=0;i<b;i++){
		cnt++;
	}
	printf("%d",cnt);
}
	
	
	
