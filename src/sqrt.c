#include <stdio.h>
#include "sqrt.h"

int func(double a, double b, double c){
	double d;
	printf("Enter a, b, c: ");
	d = b * b - 4 * a * c;
	if (d == 0){
		*x1 = -b / 2 * a;
	}
	if (d > 0){
	*x1 = (-b + sqrt(d)) / 2 * a; 
	*x2 = (-b - sqrt(d)) / 2 * a;
	}
	return 0;
}
	
