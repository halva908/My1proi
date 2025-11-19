#include <iostream>
#include <string>
using namespace std;

string numberToWords(int num)
{
	
	const string ones[] = { "", "один", "два", "три", "четыре", "пять",
						  "шесть", "семь", "восемь", "девять", "десять",
						  "одиннадцать", "двенадцать", "тринадцать", "четырнадцать",
						  "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать" };
	const string tens[] = { "", "десять", "двадцать", "тридцать", "сорок",
						  "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто" };

	if (num == 0) return "ноль";

	string result;

	if (num < 0) {
		result = "минус ";
		num = -num;
	}

	if (num < 20) {
		result += ones[num];
	}
	else {
		result += tens[num / 10];
		if (num % 10 != 0) {
			result += " " + ones[num % 10];
		}
	}

	return result;
}

int main()


{
	setlocale(LC_ALL, "rus");
	int num1, num2;

	cout << "Введите целое число: ";
	cin >> num1;

	cout << "Введите целое число: ";
	cin >> num2;

	// Проверка диапазона [-100, 100)
	if (num1 <= -100 || num1 >= 100 || num2 <= -100 || num2 >= 100) {
		cout << "Ошибка! Одно из чисел вне диапазона!" << endl;
		return 0;
	}

	string word1 = numberToWords(num1);
	string word2 = numberToWords(num2);

	if (num1 < num2) {
		cout << word1 << " меньше чем " << word2 << endl;
	}
	else if (num1 > num2) {
		cout << word1 << " больше чем " << word2 << endl;
	}
	else {
		cout << word1 << " равно " << word2 << endl;
	}

	return 0;
}