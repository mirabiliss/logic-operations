#include <stdio.h>

#define OR(x, y) ((x)? 1: ((y)? 1 : 0))
#define AND(x, y) ((x)? ((y)? 1 : 0) : 0)
#define ALT_OR(x, y) ((x)? ((!y)? 1: 0) :((y)? 1: 0))
#define NOT(x) ((x)? 0: 1)
#define FIRST_LINE(x, y, z)  (AND(AND(AND(x, y), OR(x, z)), ALT_OR(NOT(x), y)))
#define SECOND_LINE(x, y, z)  (AND(AND(OR(x, y), OR(z, y)), OR(z, x)))

#ifdef FIRST_LINE
#define RESULT(x, y, z) FIRST_LINE(x, y, z)
#else 
#define RESULT(x, y, z) SECOND_LINE(x, y, z)
#endif

int main(void) {
	int w, x, y, z;
	printf("enter x: ");
	scanf_s("%d", &x);
	printf("enter y: ");
	scanf_s("%d", &y);
	printf("enter z: ");
	scanf_s("%d", &z);
	w = RESULT(x, y, z);
	printf("result is: %d", w);
	return 0;
}
