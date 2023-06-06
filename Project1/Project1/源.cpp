#include <iostream>

long int fact(const int Number) {
	int value = 1;
	for (int i = Number; i >= 1; --i) {
		value *= i;
	}
	return value;
}

int main() {
	std::cout << fact(6) << std::endl;
	return 0;
}