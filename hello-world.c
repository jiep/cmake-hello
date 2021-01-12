#include <stdio.h>

int main(int argc, char const *argv[]) {

  if (argc != 2) {
    printf("You must provide a parameter!\n");
    return 1;
  }

  printf("Hello, %s!\n", argv[1]);

  return 0;
}
