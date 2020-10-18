/* Void Pointer - Void pointer is a pointer which has no associated data type with it. It can be typecasted to any data type */
//Example:

#include<stdio.h>

int main(){
  int n = 10;
  void *ptr = &n;  //ptr taken as void

  printf("%d", *(int*)ptr); // Typecasting and Dereferencing ptr
  return 0;
}

/*  "We cannot dereference a void pointer "
  E.g., void *ptr = &n;
        printf("%d",*ptr); //Output : error

Use of Void Pointer : malloc and calloc function returns a void pointer. Due to this reason, they can allocate a memory for any type of data */
