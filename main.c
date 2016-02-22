#include <stdio.h>

void logs(void)
{
	printf("This would be a new feature\n");
}

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++) {
		if (argv[i][0] == '-') {
			switch (argv[i][1]) {
			case 'h':
				printf("Hello, world!!!\n");
				break;
			case 'o':
				printf("Oi, mundo!\n");
				break;
			case 'l':
				logs();
				break;
			default:
				printf("What's -%c?\n", argv[i][1]);
				return 1;
			}
		}
	}

	return 0;
}
