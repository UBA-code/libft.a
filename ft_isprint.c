#include "libft.h"

int isprint(int c)
{
  if (c >= 32 && c <= 127)
    return (1);
  else
    return (0);
}