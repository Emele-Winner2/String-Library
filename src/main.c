#include "../include/my-string.h"
#include "stdio.h"

int main() {
  char a[] = "helloworldnigga";
  char b[] = "theworldaaaaaaaaaaaaa";
  int dam = my_strlen(a);
  my_memcpy(a,b);
  printf("%s", b);
  printf("%d", dam);
  return 0;
}