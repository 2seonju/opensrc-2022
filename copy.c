#include <stdlib.h>
#include <string.h>

char* copy(char * orgin)
{
    int len = strlen(orgin) +1;
    char* dest = malloc(sizeof(char)*len);
    for (int i=0; i<strlen(orgin); i++) {
        dest[i] = orgin[i];
    }
    return dest;
}