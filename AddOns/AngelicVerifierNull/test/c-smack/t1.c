#include <stdio.h>
#include <smack.h>

int* incr(int* a) ;

int* A[10];

void func(int* x) {
	assert (x != 0);
	int* z = incr(x);
	int* a = A[*z];
	assert (a != 0);
}