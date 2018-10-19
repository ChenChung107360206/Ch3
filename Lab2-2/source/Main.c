#include<stdio.h>
#include<stdlib.h>
long int recursive_factorial(int u);

int main(void) {

	int m, n;
	long int ans = 1, a, b, c;

	printf("求排列組合C(m,n)\nm=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = recursive_factorial(m);
	b = recursive_factorial(n);
	c = recursive_factorial(m - n);
	ans = a / (b*c);

	printf("C(%d,%d) = %ld\n", m, n, ans);

	system("pause");
	return 0;
}

long int recursive_factorial(int u) {

	long int result = 1;

	if (u > 1) {
		result = u * recursive_factorial(u - 1);
	}
	else
		return result;
}