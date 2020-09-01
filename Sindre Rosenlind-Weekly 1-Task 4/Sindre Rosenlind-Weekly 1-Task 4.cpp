#include <iostream>
#include <string>
int number;

int main() {
	std::cout << "What is your favorite drink?\n";
	std::cout << "1: Coffee\n";
	std::cout << "2: Tea\n";
	std::cout << "3: Coca Cola\n";
	std::cin >> number;
	if (number == 1) {
		std::cout << "Coffee is delicious\n";
	}
	if (number == 2) {
		std::cout << "Tea gives peace of mind\n";
	}
	if (number == 3) {
		std::cout << "Coke will give you a white smile\n";
	}
}