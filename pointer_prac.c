#include <stdio.h>

int main(void) {
	int a[10] = { 1,2,3,4,5,6 };
	int* p = a;
	int* q = a + 3;

	printf("%d\n", *(a + 1));
	printf("%d\n", *(p+2));
	printf("%d\n", *(q+3));
	return 0;

}