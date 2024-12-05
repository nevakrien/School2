#include "adjacency.h"

/* helper for handeling recursive part*/
static enum my_bool _path(adjmat tree,int visited[N],size_t u,size_t v){
	size_t i;

	/*check for early exit*/
	if (tree[u][v] == 1) return TRUE;

	/*check recursivly each child*/
	for( i=0;i<N;i++){
		if(!tree[u][i] || visited[i]) continue;
		if(path(tree,i,v)) return TRUE;
	}

	return FALSE;
}

/*
this function checks if there is a path from u to v
*/
enum my_bool path(adjmat tree,size_t u,size_t v){
	int visited[N];
	return _path(tree,visited,u,v);
}