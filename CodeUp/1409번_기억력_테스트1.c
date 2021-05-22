#include <stdio.h>
main()
{
	int n,i,j,a[9];
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	printf("%d",a[n-1]);
}