#include <stdlib.h>
#include "libft.h"
#include <unistd.h>

char *ft_strdup(char *s)
{
  char *txt;
  int i;

  i = 0;
  txt = malloc(sizeof(char) * ft_strlen(s));
  if (txt == NULL)
    return (NULL);
  while (s[i])
  {
    txt[i] = s[i];
    i++;
  }
  return (txt);
}
