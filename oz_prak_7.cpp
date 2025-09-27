#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	float a, b, x;
	x = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "кол-во часов: ";
		cin >> a;
		cout << "ствака: ";
		cin >> b;
		x += a * b;
	}
	cout << "общая сумма: " << x << endl;
	cout << "средняя зп в бригаде: " << x / 5;
}