/* Prints diagonals that are to the left. */
#ifndef DIAGONAL_LEFT_H
#define DIAGONAL_LEFT_H

/* Print the diagonal on direcction toward to the left on upward order. */
void pd_left_asc(int**, int);

/* Print the diagonal on direcction toward to the left on falling order. */
void pd_left_desc(int**, int);

/* Print the diagonal (on direcction toward to the left) the one below of the main diagonal on upward order. */
void pd_left_below_asc(int**, int);

/* Print the diagonal (on direcction toward to the left) the one below of the main diagonal on falling order. */
void pd_left_below_desc(int**, int);

#endif /* DIAGONAL_LEFT_H */