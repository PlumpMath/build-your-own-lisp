#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char** argv) {

  puts("janky lisp v 0.0.0.0.1");
  puts("ctrl+c to exit\n");

  /* in a never ending loop */
  while(1) {

    /* output prompt / get input */
    char* input = readline("jankylisp> ");

    /* add input to history */
    add_history(input);

    /* echo back to user */
    printf("jank %s\n", input);

    /* free retrieved input */
    free(input);
  }
}
