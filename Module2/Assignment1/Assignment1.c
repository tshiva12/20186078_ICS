#include <stdio.h>
#include <float.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
	/* code */
	printf("Char min : %d : Char max : %d\n", CHAR_MIN, CHAR_MAX);
	printf("Int min : %d : Int max : %d\n", INT_MIN, INT_MAX);
	printf("Long min : %d : Long max : %d\n", LONG_MIN, LONG_MAX);
	printf("Float min : %d : Float max : %d\n", -FLT_MAX, FLT_MAX);
	printf("Double min : %d : Double max : %d\n", -DBL_MAX, DBL_MAX);
	return 0;
}