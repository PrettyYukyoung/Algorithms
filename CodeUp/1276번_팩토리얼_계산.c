#include <stdio.h>
main()
{
    int n,sum;
    scanf("%d",&n);
    sum=n;
    for(int i=n-1;i>1;i--){
    	sum=sum*i;
	}
	printf("%d",sum);
}
