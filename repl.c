#include <stdio.h>

static char input[2048];

int main(int argc, char** argv) {

  puts("janky lisp v 0.0.0.0.1");
  puts("ctrl+c to exit\n");

  while(1) {

    fputs("jankylisp>", stdout);

    fgets(input, 2048, stdin);

    printf("jank %s", input);

  }
}
