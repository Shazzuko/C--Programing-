#include <stdio.h>

int get_item(double vals[], double key, int size) {
	for (int i = 0; i < size; i++) {
		if (key == vals[i]) {
			return i;
		}
	}

	return -1;
}

int main() {
	double vals[4] = { 1.0, 2.0, 3.0, 5.5 };
	int size = 4;
	double key = 1.1;

	int found_idx = get_item(vals, key, size);

	if (found_idx > -1) {
		printf("%lf found at index %d\n", key, found_idx);
	} else {
		printf("%lf not found.\n", key);
	}
	
	return 0;
}