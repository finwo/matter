#ifndef _STRING_MEMCPY_C_
#define _STRING_MEMCPY_C_

#include <string.h>

void * memcpy (void *dest, const void *src, size_t len) {
  char *d = dest;
  const char *s = src;
  while (len--) {
    *d++ = *s++;
  }
  return dest;
}

#endif // _STRING_MEMCPY_C_
