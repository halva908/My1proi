#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int arr[3][6] = {
		{10, 25, 3, 18, 7, 30},
		{14, 5, 22, 9, 16, 4},
		{27, 8, 19, 2, 21, 11}
	};

	
	cout << "Массив:" << endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 6; ++j) {
			cout << arr[i][j] << "\t";  
		}
		cout << endl;  
	}

	
	int min_val = arr[0][0];
	int max_val = arr[0][0];
	int min_row = 0, min_col = 0;
	int max_row = 0, max_col = 0;


	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 6; ++j) {
			if (arr[i][j] < min_val) {
				min_val = arr[i][j];
				min_row = i;
				min_col = j;
			}
			if (arr[i][j] > max_val) {
				max_val = arr[i][j];
				max_row = i;
				max_col = j;
			}
		}
	}


	cout << "Индекс минимального элемента: " << min_row << " " << min_col << endl;
	cout << "Индекс максимального элемента: " << max_row << " " << max_col << endl;

	return 0;
}