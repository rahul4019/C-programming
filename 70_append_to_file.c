#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *ptr = NULL;

  char str[50];
  ptr = fopen("abc.txt", "a");

  if (ptr == NULL) {
    printf("Error\n");
    exit(1);
  }

  printf("Enter the content you want to appedn in the file.\n");
  gets(str);

  fprintf(ptr, "%s", str);
  printf("Successfully appended\n");

  fclose(ptr);

  // one more method is fputs()
}
