#include <stdio.h>

int main(const char *rexfile)
{
char c;

 c = fopen(rexfile, "r");
fprintf(rexfile, "%s\n", "Hello world");
  return (0);
}