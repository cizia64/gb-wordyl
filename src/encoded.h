
#include <stdint.h>

#ifndef _ENCODED_H
#define _ENCODED_H

extern const uint8_t wordBlob[];

extern const uint8_t answers[];

typedef struct {
  uint16_t wordNumber;
  uint16_t blobOffset;
} LetterList_t;

extern const LetterList_t words[];

#endif