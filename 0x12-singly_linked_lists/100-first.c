#include <stdio.h>

void before_main(void) {
    printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

__attribute__((constructor)) void before_main_exec() {
    before_main();
}
