#include <iomanip>;
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int number, i; //задаем целочисленные переменные
	double multiply = 1; //задаем начальное значение дл€ произведени€

	cout << "¬ведите число от 1 до 20: \n";//предлагаем пользователю ввести любое число от 1 до 20
	cin >> number;

	if (number < 1 || number >20)// провер€ем правильно ли введено число
	{
		cout << "Ќеверно задан параметр числа";
		return 0;
	}
	for (i = number; i <= 20; i++)
	{
		multiply = multiply * i;
		
	}
	cout << "ѕроизведение чисел равно  = " << multiply << "\n";

	return 0;

}
