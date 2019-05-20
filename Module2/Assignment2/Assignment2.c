#include<stdio.h>
#include<math.h>
void main() {
    printf("Enter a hexa decimal Number\n");
    char hexa[100];
    gets(hexa);
    printf("Entered String is\n");
    puts(hexa);
    int size = 0;
    while (hexa[size] != '\0') {
        size++;
    }
    int p = 0;
    int res = 0;
    for (int i = size - 1; i >= 0; i--) {
        if (hexa[i] == 'A' || hexa[i] == 'a') {
            res = res + (10 * (int)pow(16, p));
        } else if (hexa[i] == 'B' || hexa[i] == 'b') {
            res = res + (11 * (int)pow(16, p));
        } else if (hexa[i] == 'C' || hexa[i] == 'c') {
            res = res + (12 * (int)pow(16, p));
        } else if (hexa[i] == 'D' || hexa[i] == 'd') {
            res = res + (13 * (int)pow(16, p));
        } else if (hexa[i] == 'E' || hexa[i] == 'e') {
            res = res + (14 * (int)pow(16, p));
        } else if (hexa[i] == 'F' || hexa[i] == 'f') {
            res = res + (15 * (int)pow(16, p));
        } else {
            res = res + (hexa[i] - '0')*(int)pow(16, p);
        }
        p++;
    }
    printf("decimal number is %d\n", res);
}