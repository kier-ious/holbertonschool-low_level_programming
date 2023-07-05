#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h>

/*This is the document for all the prototypes*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
