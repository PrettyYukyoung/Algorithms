#include <stdio.h>
main(){
	int k,h,max=0,a;
	scanf("%d %d",&k,&h);
	if(k%2==0){
		max+=k*5;
	}
	else{
		a=k/2;
		max+=k-a;
	}
	if(h%2==0){
		max+=h*5;
	}
	else{
		a=h/2;
		max+=h-a;
	}
	printf("%d",max);
}