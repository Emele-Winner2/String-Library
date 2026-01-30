#include "my-string.h"
#include "stdio.h"

int main() {
  char a[] = "helloworld";
  int dam = my_strlen(a);
  printf("%d", dam);
  return 0;
}