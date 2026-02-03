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
 int my_memcpy(const char* src, char* dest) {
	if (my_strlen(dest) < my_strlen(src))
	{
		printf("Error: compare the length of the strings before you copy.\n");
		return -1;//second string cannot contain src string
	}
	//copy the elements from src to dest string.
	for (size_t i = 0; i < my_strlen(dest); i++)
	{
		dest[i] = src[i];//added the null terminator.
		if (i>my_strlen(src))
		{
			dest[i] = '\0';
		}

	}
	return true;
}