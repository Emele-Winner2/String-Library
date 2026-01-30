#include "my-string.h"
#include "stdint.h"
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
};