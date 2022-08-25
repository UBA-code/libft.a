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
int atoi(const char *nptr);
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

/*  Memory Functions */

void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_calloc(size_t nmemb, size_t size);

/**** Additional functions ****/
/* String Functions */

char *ft_strjoin(char const *s1, char const *s2);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* Files Functions */

void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif