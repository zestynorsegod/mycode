#include <stdio.h>

int main() {


	char name[20];
	printf("What's your name?\n");
	fflush(stdout);
	scanf("%19s", name);
	printf("Hi %s\n", name);

return(0);
}
