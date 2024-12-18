#include "adjacency.h"
#include <stdio.h>

int main(){
	char c;
	int u,v;

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

	/*print what we got*/
	for( i=0;i<N;i++){
		for( j=0;j<N;j++){
			printf("%d ",tree[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	if(scanf("%d %d",&u,&v)!=2){
		printf("failed reading input\n");
		return 1;
	}

	if(u<0 || v<0){
		printf("first input must be positive\n");
		return 1;
	}

	while(1){
		printf("got u = %d v = %d ",u,v);
		if(path(tree,u,v)){
			printf("TRUE\n");
		}else{
			printf("FALSE\n");
		}

		while((c=getchar())==' ' || c=='\n'){

		}
		if(c==EOF){
			break;
		}
		ungetc(c,stdin);


		if(scanf("%d %d",&u,&v)!=2){
			printf("failed reading input\n");
			return 1;
		}
		if(u==-1 && v==-1){
			break;
		}
		if(u<0 || v<0 ){
			printf("negative indecies dont make sense...\ndid you mean to exit? thats -1 -1\n");
			return 1;
		}

	}

	printf("done\n");

	return 0;
}