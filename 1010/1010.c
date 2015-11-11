#include<stdio.h>

int main() {
	int firstProductCode, firstProductQuantity; 
	int secondProductCode, secondProductQuantity; 
	float firstProductPrice;
	float secondProductPrice;
	float total;
	
	scanf("%d", &firstProductCode);
	scanf("%d", &firstProductQuantity);
	scanf("%f", &firstProductPrice);

	scanf("%d", &secondProductCode);
	scanf("%d", &secondProductQuantity);
	scanf("%f", &secondProductPrice);

	total = firstProductQuantity * firstProductPrice + secondProductQuantity * secondProductPrice;

	printf("VALOR A PAGAR: R$ %.2f\n", total);	

	return 0;
}
