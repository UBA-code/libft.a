#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char *res;
  int i;

  i = 0;
  res = malloc(ft_strlen((char *)s));
  if (res == NULL)
    return (NULL);
  while (s[i])
  {
    s[i] = f(i, s[i]);
  }
}