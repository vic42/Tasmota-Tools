#include <stdio.h>

int main(int argc, char *argv[])
{
	int c, i=0;
	
	while ((c=getchar()) != EOF) {
		putchar((c ^ (0x5A+i)) & 0xFF);
		++i;
	}
	return 0;
}
