app = solution
lib = libtest.so

CFLAGS = -std=c11 -Werror -Wall -ansi -pedantic
LDFLAGS = -ldl

all: $(app) $(lib)

solution: solution.c
	$(CC) $(CFLAGS) -Wl,-rpath,. -o $@ $< $(LDFLAGS)

lib%.so: %.c
	$(CC) -shared -fPIC $(CLAGS) -o $@ $<

run: all
	./$(app) $(lib) testcall 2 

clean:
	$(RM) $(app) $(lib)

