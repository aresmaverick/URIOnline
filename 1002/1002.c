#include<stdio.h>

void main() {
	double pi = 3.14159;
	double R;
	double A;

	scanf("%lf", &R);
	A = pi * R * R;

	printf("A=%.4f\n", A);
}
