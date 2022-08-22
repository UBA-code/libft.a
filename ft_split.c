#include "libft.h"

int char_count(const char *s, int c)
{
  int i;
  int size;

  size = 0;
  i = 0;
  while (s[i])
  {
    if (s[i] == c)
      size++;
    i++;
  }
  return (size + 1);
}

int count_diff(int one, int two)
{
  return (one - two);
}

int *alloc_copy(char **final, char *s,int diff, int *x)
{
  ++*x;
  final[*x] = malloc(sizeof(char) * diff);
  if (final[*x] == NULL)
    return (NULL);
  ft_strlcpy(final[*x], (char *)s, diff + 1);
}

char **ft_split(char const *s, char c)
{
  int i;
  int j;
  int x;
  char **final_tab;

  final_tab = malloc(sizeof(char*) * char_count((char *)s, c));
  if (final_tab == NULL)
    return (NULL);
  i = -1;
  j = 0;
  x = -1;
  while (s[++i])
  {
    if (s[i] == c)
    {
      if (alloc_copy(final_tab, (char *)s + j, count_diff(i, j), &x) == NULL)
        return (NULL);
      j = ++i;
    }
  }
  if (alloc_copy(final_tab, (char *)s + j, count_diff(i, j), &x) == NULL)
    return (NULL);
  final_tab[x + 1] = '\0';
  return (final_tab);
}

/*
int main()
{
  char str[] = "Hello,Guys,Welcome,home,everybody,slm,youssef,yassine,omar,zbi,tbonmok";
  char **s = ft_split(str, ',');
  int i = 0;

    printf("%s,", s[0]);
    printf("%s,", s[1]);
    printf("%s,", s[2]);
    printf("%s,", s[3]);
    printf("%s,", s[4]);
    printf("%s,", s[5]);
    printf("%s", s[6]);
    
  while (s[i])
  {
    printf("%s, ", s[i]);
    i++;
  }
  return 0;
}*/