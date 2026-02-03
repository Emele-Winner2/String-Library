#include "../include/my-string.h"
#include "stdio.h"
#include "string.h"
int main() {
  char a[] = "helloworldnigga";
  char b[] = "theworldaaaaaaaaaaaaa";
  my_strcpy(b, a);
  printf("%s", b);
 
  return 0;
}