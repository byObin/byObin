#include <stdio.h>

void modify(int *ptr){
*ptr=99;
}

int main(void){
	int num=1;

	modify(&num);
	printf("num = %d\n", num);

	return 0;
}