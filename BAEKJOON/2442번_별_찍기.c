#include <stdio.h>
main(){
    int i,j,k,star;
    scanf("%d",&star);
    for(i=0;i<star;i++){
    	for(k=1;k<star-i;k++){
            printf(" ");
        }
        for(j=0;j<1+(i*2);j++){
            printf("*");}
    
        printf("\n");
    }
}