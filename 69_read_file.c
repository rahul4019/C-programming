#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fptr = NULL;

  fptr = fopen("abc.txt", "r");

  if (fptr == NULL) {
    printf("Error\n");
    exit(1);
  }

  /* char ch; */
  /* ch = fgetc(fptr); */

  // reading file content character by character
  // feof is predefined funcion (end of file)
  /* while (!feof(fptr)) { */
  /*   char a = fgetc(fptr); */
  /*   printf("%c", a); */
  /* } */

  char str[20];
  fgets(str, 6,
        fptr); // if there are more than one line fgets get terminated
               // at next line character to read whole put fgets inside a loop
  printf("%s", str);

  /* printf("%c", ch); */
  fclose(fptr);
}
