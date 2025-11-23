#include <iostream>
using namespace std;

int main() {
	int number;
	int sum = 0;
	setlocale(LC_ALL, "rus");
	std::cout << "¬ведите целое число или число '0', чтобы закончить:" << std::endl;

	while (true) {
		cin >> number;

		if (number == 0) {
			break;
		}

		sum += number;
		std::cout << "¬ведите целое число или число '0', чтобы закончить:" << std::endl;
	}

	std::cout << "—умма: " << sum << std::endl;

	return 0;
}