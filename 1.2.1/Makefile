buildall: libsolution.so

libsolution.so: solution.h solution.c
	gcc -shared -fPIC -o libsolution.so solution.c

clean:
	rm *.so 

