#include <stdio.h>
void main() {
	printf("Enter a String\n");
	int c;
	while ((c = getchar()) != EOF) {
    	if (c == ' ') {
        	while ((c = getchar()) == ' '); {
        		putchar(' ');
        	}
    	}
    	putchar(c);
	}
}