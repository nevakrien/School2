#ifndef ADJACENCY_H
#define ADJACENCY_H
#include <stddef.h>

enum my_bool/*dont wana break C99 code if we dont have to*/{ 
	FALSE,
	TRUE
};
#define N 3

typedef int adjmat[N][N];

enum my_bool path(adjmat tree,size_t u,size_t v);

#endif /*ADJACENCY_H.*/
