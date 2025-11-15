#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	
	std::string str;


	std::cout << "Введите число: ";
	std::cin >> str; 
	std::cout << "Вы ввели: " << str << std::endl;

	return 0;
}