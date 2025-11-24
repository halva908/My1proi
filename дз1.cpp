#include <iostream>
using namespace std;

int main() {
	
	int arr[10] = { 5, 12, 3, 8, 17, 21, 4, 9, 15, 7 };

	
	for (int i = 0; i < 10; ++i) {
		cout << arr[i];
		if (i < 9) {
			cout << ", ";
		}
	}
	cout << endl;

	return 0;
}