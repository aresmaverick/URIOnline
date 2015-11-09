#include<stdio.h>

int main() {
	float X;
	float Y;
	float Z;

	scanf ("%f", &X);
	scanf ("%f", &Y);
	scanf ("%f", &Z);
	
	printf("MEDIA = %.1f\n", (X*2+Y*3+Z*5)/10);

	return 0;
}
