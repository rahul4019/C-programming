#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fptr =
      NULL; // pointer which points to the variable of file type (defined in
  // stdio.h header file)

  fptr =
      fopen("abc.txt",
            "w"); // if file doesn't exist, fopen will create one and then will
                  // load a copy of that file in the memory called buffer.
  if (fptr == NULL) {
    printf("no file");
    exit(1);
  }
  char ch = 'r';
  int num = 10;

  fputc(ch, fptr); // write a character to the file

  fprintf(fptr, "%c%s\n", 'a',
          "hul"); // using fpritf we can write multiple elements to the file

  fclose(fptr); // close the file
}
