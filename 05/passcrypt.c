#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *password = argv[1];
  char salt[256];
  sprintf(salt, "$%s$%s$", argv[2], argv[3]);
  char *hash = (char *)crypt(password, salt);

  printf("password:%s\n", password);
  printf("ID:%s\n", argv[2]);
  printf("salt:%s\n", argv[3]);
  printf("%s\n", hash);
  return EXIT_SUCCESS;
}
