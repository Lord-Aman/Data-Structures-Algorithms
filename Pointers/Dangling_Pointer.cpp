// A dangling Pointer is pointer which points to some non-existing memory location

#include <stdio.h>

int main(){
  int *ptr = (int*)malloc(sizeof(int)); // Allocating memory
  ...
  ...
  free(ptr); // Memory is now released, But the pointer is still pointing to the deallocated memory. (ptr is now a dangling pointer)
  return 0;
}

//SOLUTION:

  free(ptr);
  ptr = NULL; //Reinitialize the pointer
