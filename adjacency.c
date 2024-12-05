#include "adjacency.h"
#include <stdio.h>

int main(){
	size_t i,j;
	adjmat tree;

	/*read input*/
	printf("please insert an %d X %d matrix\n",N,N);

	for( i=0;i<N;i++){
		for( j=0;j<N;j++){

			if(scanf("%d",&tree[i][j])!=1){
				printf("failed reading input\n");
				return 1;
			}

			if(tree[i][j]!=0 && tree[i][j]!=1){
				printf("only values of 0/1 are valid\n");
				return 1;
			}
		}
	}

	printf("done\n");

	return 0;
}