// A NULL pointer is a pointer that does not point to any memory location. It represents an invalid memory location.

#include <stdio.h>

int main(){
  int *ptr = NULL;
  return 0;
}

/*

(*) Use of NULL Pointer:
-> It is used to initialize a pointer when that pointer isn't assigned any valid memory address yet.
-> Useful for handling errors when using malloc function.

E.g.,

*/
      int main(){
        int *ptr;
        ptr = (int*)malloc(2*sizeof(int));

        if(ptr == NULL){
          printf("Memory could not be allocated");
          else{
            printf("Memory allocated successfully");
            return 0;
          }
        }
      }

/*
(*) FACTS ABOUT NULL POINTER

-> The value of NULL is 0. We can either use NULL or 0 but this 0 is written in context of pointers and is not equivalent to the integer 0.
E.g.,
*/
        int main(){
          int *ptr = NULL;
          printf("%d", ptr); // Output : 0
          return 0;
        }
/*

 -> Size of NULL pointer depends upon the platform and is similar to the size of the normal pointers.

 E.g.,
 */
        int main(){
          printf("%d",sizeof(NULL)); // Different for Different Platforms
          return 0;
        }
/*
(*)  BEST PRACTICES

-> It is a good practice to initialize a pointer as NULL.
-> It is a good practice to peform NULL check before dereferencing any pointer to avoid surprises.
*/
