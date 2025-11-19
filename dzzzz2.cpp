#include <iostream>
using namespace std;

int main() 


{
	setlocale(LC_ALL, "rus");
	int a, b, c;

	cout << "¬ведите первое число: ";
	cin >> a;
	cout << "¬ведите второе число: ";
	cin >> b;
	cout << "¬ведите третье число: ";
	cin >> c;
	
	int max_val = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

	int min_val = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

	int mid_val = (a != max_val && a != min_val) ? a :
		(b != max_val && b != min_val) ? b : c;

	cout << "–езультат: " << max_val << " " << mid_val << " " << min_val << endl;

	return 0;
}



