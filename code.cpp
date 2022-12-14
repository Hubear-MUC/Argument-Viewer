#include <stdio.h>
int a;
main(int c, char**v)
{
  for (a=0;a<c;++a)
    {
      printf ("%s\n", v[a]);
    }
}
