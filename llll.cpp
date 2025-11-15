#include <iostream>
#include <string>
using namespace std;


int main()

{
	string word;


	setlocale(LC_ALL, "rus");

	std::cout << "Введите слово: " << std::endl;
	std::cin >> word;

	std::cout << "Вы ввели слово: " << word << std::endl;

	return 0;




}