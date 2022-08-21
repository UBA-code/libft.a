#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.>

int ft_strlen(char *str);
int ft_strlcpy(char *dest, char *src, int size);
int ft_strlcat(char *dest, char *src, int size);
int ft_strncmp(char *str1, char *str2, int n);
char *ft_strdup(char *s);
int ft_atoi(const char *str);
char *ft_strrchr(char *str, int c);
char *ft_strchr(char *str, int c);
char *ft_strnstr(char *haystack, char *needle, int len);
int ft_isalnum(int c);
int isalpha(int c);
int isdigit(int c);
int isprint(int c);
int toupper(int c);
int tolower(int c);

#endif