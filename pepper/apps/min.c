#include <stdint.h>

#define SIZE 10

struct In {
    uint32_t array[SIZE];
};

struct Out {
    uint32_t min;
};

/*
  Search an array and return the minimum value.
*/
void compute(struct In* input, struct Out* output){
  uint32_t i, min;

  // Search the array (linear time)
  min = UINT32_MAX;
  for(i = 0; i < SIZE; i++){
    if (input->array[i] < min){
      min = input->array[i];
    }
  }

  output->min = min;
}
