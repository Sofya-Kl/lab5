#include <stdio.h>
#include "sqrt.h"

int main() {
	double a, b, c, x1, x2;
	int status;
	printf("Enter a, b, c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	status = func(a, b, c, x1, x2);
	if (status == 0)
		printf("no solution");
	if (status == 2)
		printf("x1 =%.2lf.\n x2 =%.2lf.\n", x1, x2);
	if (status == 1)
		printf("x1 = x2 = %.2lf.\n", x1);
	return 0;
}
	