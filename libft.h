#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(const char *s);
void *ft_calloc(unsigned int nmemb, unsigned int size);
unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size);
char *ft_strjoin(char const *s1, char const *s2);
unsigned int ft_strlcat(char *dst, char *src, unsigned int size);
int ft_strtrim(char const *s1, char const *set);

#endif
