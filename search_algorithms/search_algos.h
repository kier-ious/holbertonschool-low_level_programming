#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
/*Main functions*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
/*Helper*/
void print_array(int *array, size_t first, size_t last);
#endif
