#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <unistd.h>
/*This is the document for all the prototypes*/
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
char *cap_string(char *);
int _putchar(char c);
#endif
