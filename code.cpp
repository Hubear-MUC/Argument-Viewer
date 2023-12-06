#include <stdio.h>
#include <string.h>

int a,b;

main(int c, char**v)
{
for (a=0;a<c;++a)
{
b = strlen(v[a]);
printf ("%s, %d\n",v[a],b);
}
}
