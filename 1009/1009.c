#include<stdio.h>

int main () {
	char STRING[256];
	float SALARY, SOLD;

	scanf("%s", STRING);
	scanf("%f", &SALARY);
	scanf("%f", &SOLD);
	
	printf("TOTAL = R$ %.2f\n", SALARY+SOLD*0.15);

	return 0;
}
