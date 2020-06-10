#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>


typedef int (*external)(const int);

int main(int argc, char** argv) {
  int retvalue = -1;
  void* fp = NULL;
  external callback;
  if (argc < 4) {
    return retvalue;
  }
  fp = dlopen(argv[1], RTLD_LAZY);
  if (!fp) {
    return retvalue;
  }
  *(void**)(&callback) = dlsym(fp, argv[2]);
  printf("%d\n", callback(atoi(argv[3])));
  dlclose(fp);
  return 0;
}
