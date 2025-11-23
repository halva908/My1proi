#include <iostream>
using namespace std;

int main()
{
	int number;
	setlocale(LC_ALL, "rus");

	std::cout << "Введите целое число: " << std::endl;
	std::cin >> number;

	for (int i = 1; i <= 10; i++) 
	{
		std::cout << number << "x" << i << "=" << number << i << std::endl;
		

	}
	std::cout << "Ваша таблица :)" << std::endl;




	return 0;
}