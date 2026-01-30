#include "../include/my-string.h"
#include "stdint.h"
#include "stdbool.h"
size_t my_strlen(const char *str) {
  size_t count = 0;

  while(str[count] != '\0') {
    count++;
  } 
  return count;

};
bool my_strcpy(const char *src, char *dest){
  if (my_strlen(dest)<my_strlen(src))
  {
    return -1;//second string cannot contain src string
  }
  for (size_t i = 0; i < my_strlen(src); i++)
{
  dest[i] = src[i];
}
  return true;
}