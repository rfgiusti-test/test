#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++) {
		if (argv[i][0] == '-') {
			switch (argv[i][1]) {
			case 'h':
				printf("Hello, world!\n");
				break;
			case 'o':
				printf("Oi, mundo!\n");
				break;
			default:
				printf("What's -%c?\n", argv[i][1]);
				return 1;
			}
		}
	}

	return 0;
}
