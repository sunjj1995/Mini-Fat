#include "lowfat.h"
#include <string.h>
extern size_t lowfat_strlen(const char *ptr) {
    ptr = (unsigned long)ptr & MINIFAT_MATCH;
    return strlen(ptr);
}

