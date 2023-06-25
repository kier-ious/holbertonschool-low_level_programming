#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <unistd.h>
/*This is the document for all the prototypes*/
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
#endif
