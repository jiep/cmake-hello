#include <stdio.h>

#ifndef VERSION
#define VERSION "1.0.0"
#endif

void banner(){
  printf("Welcome to Hello v%s\n", VERSION);
}

int main(int argc, char const *argv[]) {
  banner();

  if (argc != 2) {
    printf("You must provide a parameter!\n");
    return 1;
  }

  printf("Hello, %s!\n", argv[1]);

  return 0;
}
