#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>


typedef int (*external)(const int);
union {
  external func;
  void* p;
} ext;


int main(int argc, char** argv) {
  int retvalue = -1;
  if (argc < 4) {
    return retvalue;
  }
  ext.p = dlopen(argv[1], RTLD_LAZY);
  if (!ext.p) {
    return retvalue;
  }
  *(void**)(&ext.func) = dlsym(ext.p, argv[2]);
  printf("%d\n", ext.func(atoi(argv[3])));
  return 0;
}
