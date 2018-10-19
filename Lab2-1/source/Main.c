#include<stdio.h>
#include<stdlib.h>
long int factorial(int p);

int main(void) {

	int m, n;
	long int ans = 1, a, b, c;

	printf("求排列組合C(m,n)\nm=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = factorial(m);
	b = factorial(n);
	c = factorial(m-n);
	ans = a / (b*c);

	printf("C(%d,%d) = %ld\n", m, n, ans);

	system("pause");
	return 0;
}

long int factorial(int p) {

	long int result = 1;

	for (int i = p; i >= 1; i--) {
		result = result * i;
	}

	return result;
}