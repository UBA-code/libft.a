#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
  int i;
  char *tab;

  tab = s;
  i = 0;
  while (i < n)
  {
    tab[i] = c;
    i++;
  }
  return tab;
}

// this function need a check