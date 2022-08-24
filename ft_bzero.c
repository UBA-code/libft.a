#include "libft.h"

void ft_bzero(void *s, size_t n)
{
  char *tab;
  int i;

  i = 0;
  tab = s;
  while (i < n)
  {
    tab[i] = '\0';
    i++;
  }
}

// this function need a check