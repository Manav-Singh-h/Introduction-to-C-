#include <stdio.h>

int
main ()
{
  char u[80], g[100];
  int pcount = 0, qcount = 0;
  printf ("Enter string: ");
  scanf ("%s", u);
  for (pcount = 1, qcount = 0; u[pcount] != '\0'; pcount++, qcount++)
    g[qcount] = u[pcount];
  g[qcount++] = u[0];
  g[qcount++] = 'a';
  g[qcount] = '\0';
  printf ("Output is :%s", g);
  return 0;
}
