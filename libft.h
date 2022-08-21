#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

/* String Functions */

int ft_strlen(char *str);
int ft_strlcpy(char *dest, char *src, int size);
int ft_strlcat(char *dest, char *src, int size);
int ft_strncmp(char *str1, char *str2, int n);
char *ft_strdup(char *s);
int ft_atoi(const char *str);
char *ft_strrchr(char *str, int c);
char *ft_strchr(char *str, int c);
char *ft_strnstr(char *haystack, char *needle, int len);

/* Type Functions */

int ft_isalnum(int c);
int isalpha(int c);
int isdigit(int c);
int isprint(int c);
int toupper(int c);
int tolower(int c);

/**** Additional functions ****/
/* String Functions */

char *ft_strjoin(char const *s1, char const *s2);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s1, char const *set);

#endif