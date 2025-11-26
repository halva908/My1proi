#include <iostream>>
using namespace std;

int main()
{
	int number;
	setlocale(LC_ALL, "rus");


	cout << "¬ведите число: " << endl;
	cin >> number;
	for (int i = 1; i <= 10; ++i)
	{

		cout << number << "x" << i << "=" << (number * i) << endl;
	}

	return 0;

}