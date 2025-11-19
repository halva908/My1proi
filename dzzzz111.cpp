#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	// true = 1 
	// falce = 0
	std::cout << "Оператор: ||" << "\n";
	std::cout << "true || true = " << (true || true) << "\n";
	std::cout << "false || true = " << (false || true) << "\n";
	std::cout << "true || false = " << (true || false) << "\n";
	std::cout << "falce|| false = " << (false || false) << "\n\n";


	std::cout << "Оператор: ||" << "\n";
	std::cout << "true && true = " << (true && true) << "\n";
	std::cout << "false && true =" << (false && true) << "\n";
	std::cout << "true && false = " << (true && false) << "\n";
	std::cout << "falce && false = " << (false && false) << "\n";




	return 0;
}


