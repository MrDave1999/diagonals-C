#ifndef ARRAY_H
#define ARRAY_H

/* Here the value of the dimension is saved. */
extern int N;

/* Dynamically create a two-dimensional array. */
int** create_array2d(void);

/* Frees the memory of the two-dimensional array. */
void free_array2d(int**);

#endif /* ARRAY_H */