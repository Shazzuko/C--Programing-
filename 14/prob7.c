#include <stdio.h>

int main() {
	double original_price = 0;
	double current_price = 0;

	printf("Enter the original price: ");
	scanf("%lf", &original_price);
	printf("Enter the current price: ");
	scanf("%lf", &current_price);

	// Your code
	double diff = current_price - original_price;
	if (diff > 50) {
		printf("Sell immediately!\n");
	} else if (diff >= 0.01 && diff <= 50) {
		printf("Selling advised.\n");
	} else if (diff == 0.0) {
		printf("Sell at your own discretion.\n");
	} else if (diff <= -0.01 && diff >= -50) {
		printf("Don't sell unless necessary.\n");
	}

	return 0;
}
