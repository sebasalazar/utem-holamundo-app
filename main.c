#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

	if (argc > 1) {
		fprintf(stdout,"\nHola %s\n", argv[1]);
	} else {
		printf("\nSe necesita un argumento\n");
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
