#include <stdio.h>
int main() {
	int a = 10;
	int b = 20;
	int result;
	asm("addl %1, %2;"
		"movl %2, %0;"
		: "=r" (result)
		: "r" (a), "r" (b)
	);

	printf("O resultado é: %d\n", result);

	return 0;
}
