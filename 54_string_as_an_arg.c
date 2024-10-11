#include <stdio.h>

void find_len(char *str1, char *str2) {
  int len1 = 0;
  int len2 = 0;

  for (int i = 0; str1[i] != '\0'; i++) {
    len1++;
  }

  for (int i = 0; str2[i] != '\0'; i++) {
    len2++;
  }

  printf("Length of string str1: %d\n", len1);
  printf("Length of string str2: %d\n", len2);
}

int main() {
  char str1[] = "rahul";
  char str2[] = "kumar";

  find_len(str1, str2);
  return 0;
}
