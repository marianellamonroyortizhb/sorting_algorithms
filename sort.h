#ifndef _SORT_ALGORIT_
#define _SORT_ALGORIT_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
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


void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
listint_t *create_listint(const int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap_nodes(listint_t **list, listint_t *node_left, listint_t *node_right);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void quick_sort_funct(int *array, size_t size, int p_low, int p_high);
int partition(int *array, size_t size, int p_low, int p_high);
#endif
