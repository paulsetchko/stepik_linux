app = solution

CFLAGS = -std=c11 -Werror -Wall -ansi -pedantic
LDFLAGS = -ldl

all: $(app)

solution: solution.c
	$(CC) $(CFLAGS) -Wl,-rpath,. -o $@ $< $(LDFLAGS)

