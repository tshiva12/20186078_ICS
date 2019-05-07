#include<stdio.h>
void main() {
	char str[500], rev[500];
	int count = 0, revCount, i;
	printf("Enter a String\n");
	gets(str);
	while (str[count] != '\0') {
		count++;
	}
	revCount = count - 1;
	for (i = 0; i < count; i++) {
		 rev[i] = str[revCount];
		 revCount--;
	}
	printf("%s\n", rev);
}