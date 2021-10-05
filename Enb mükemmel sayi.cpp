#include <stdio.h>

int main(){
    int i,j,sum;
	for (i=1; i <10000 ; i++) {

 		sum=0;
		for(j=1; j<i; j++){
			if(i%j==0){
				sum = sum + j;
			}
		}
		if(sum == i){
			printf("%d\n",i );
		}
	}	
	return 0;
}
