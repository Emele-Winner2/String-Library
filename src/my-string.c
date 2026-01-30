#include "my-string.h"
#include "stdint.h"


size_t my_strlen(const char *str) {
  size_t count = 0;

  while(str[count] != '\0') {
    count++;
  } 
  return count;
};