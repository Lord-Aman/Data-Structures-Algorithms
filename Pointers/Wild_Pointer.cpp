/*
-> Wild Pointers are also known as Uninitialized Pointers
-> These pointer usually point to some arbitrary memory location and may cause a program to crash or misbehave

*/

#include <stdio.h>

int main(){
  int *p;
  *p = 10;
  return 0;
}
