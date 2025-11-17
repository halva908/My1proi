#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	
	int num;

	
	std::cout << "Введите число: " << std::endl;
	std::cin >> num; 
	std::cout << "Вы ввели: " << num << std::endl;

	return 0;
}