#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void __attribute__ ((constructor)) initLibrary(void) {
	printf("Escabe lib is initialized\n");
	printf("[LO] uid:%d | euid:%d\n" , getuid(), geteuid());
	setuid(1069);
	printf("[LO] uid:%d | euid:%d\n" , getuid(), geteuid());
}
