#include "my-string.h"
#include "stdint.h"
<<<<<<< HEAD
size_t my_strlen(const char str[]){
    char check = '0';
    int count;
    for (size_t i = 0;check!='\0'; i++)
    {
        check = str[i];
        if (check!='\0')
        {
            count++;
        }
        
    }
    return count;
=======


size_t my_strlen(const char *str) {
  size_t count = 0;

  while(str[count] != '\0') {
    count++;
  } 
  return count;
>>>>>>> 3d4e19a683ac89a3c8ad2c8ca3d7996ae16bfaa9
};