#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "rus");
	int number;
	int sum = 0;

	cout << "Введите целое число:" << endl;
	cin >> number;

	number = abs(number);

	
	while (number > 0) {
		sum += number % 10; 
		number /= 10;     
	}

	cout << "Сумма цифр: " << sum << endl;

	return 0;
}