#include<iostream>
using namespace std;

float per(float& a, float& b)
{
	return a * b;
}
float vt(float(a))
{
	return a * 0.13;
}
float tr(float(a))
{
	return a * 0.87;
}
void main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	float a, b, m, n, x, y, z, l;
	string c, d;
	cin >> a >> b;
	c = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	m = vt(per(a, b));
	n = tr(per(a, b));
	while (c.length() > 40)
	{
		cout << "Напишите фамилию,не более 20 символов: " << endl;
		cin >> c;
	}
	cin >> x >> y;
	d = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	z = vt(per(x, y));
	l = tr(per(x, y));
	while (d.length() > 40)
	{
		cout << "Напишите фамилию,не более 20 символов: " << endl;
		cout << ": " << endl;
		cin >> d;
	}
	cout << "Фамилии тех, кто получил на руки меньше 1000 руб:" << endl;
	if (n < 1000)
	{
		if (m > 50)
		{
			cout << c.substr(0, 1) << "-" << c.substr(c.length() - 1, 1) << endl;
		}
		else
		{
			cout << c << endl;
		}
	}
	if (l < 1000)
	{
		if (z > 50)
		{
			cout << d.substr(0, 1) << "-" << d.substr(d.length() - 1, 1) << endl;
		}
		else
		{
			cout << d << endl;
		}
	}
}