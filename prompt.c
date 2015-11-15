#include <stdio.h>
#include <stdlib.h>

/* preprocessing stuff for windows */
#ifdef _WIN32

#include <string.h>

static char buffer[2048];

char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);

  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

void add_history(char* unused) {}
#else

#include <editline/readline.h>

#endif

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
