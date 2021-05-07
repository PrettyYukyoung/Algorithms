#include <stdio.h>
main(){
	int n,i,max=-1,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a>max)
			max=a;
	}
	printf("%d",max);
}