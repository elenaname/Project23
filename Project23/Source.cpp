#include <iomanip>;
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int number, i; //������ ������������� ����������
	double multiply = 1; //������ ��������� �������� ��� ������������

	cout << "������� ����� �� 1 �� 20: \n";//���������� ������������ ������ ����� ����� �� 1 �� 20
	cin >> number;

	if (number < 1 || number >20)// ��������� ��������� �� ������� �����
	{
		cout << "������� ����� �������� �����";
		return 0;
	}
	for (i = number; i <= 20; i++)
	{
		multiply = multiply * i;
		
	}
	cout << "������������ ����� �����  = " << multiply << "\n";

	return 0;

}
