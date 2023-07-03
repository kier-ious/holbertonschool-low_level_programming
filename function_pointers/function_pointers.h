#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h>

/*This is the document for all the prototypes*/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);
#endif
