#include <stdio.h>
#include <math.h>
#include "sqrt.h"

int func(double a, double b, double c, double *x1, double *x2) {
	double d;
	int status;
	d = b * b - 4 * a * c;
	if (a == 0){
		status = -1;
	}
	if (d == 0){
		*x1 = -b / (2 * a);
		status = 1;
	}
	if ((d > 0) && (a != 0)){
		*x1 = (-b + sqrt(d)) / (2 * a); 
		*x2 = (-b - sqrt(d)) / (2 * a);
		status = 2;
	}
	if ((d < 0)||(a == 0 && b == 0)){
		status = 0;
	}
	return status;
}
	
