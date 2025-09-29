#include <iostream>
using namespace std;

float per(float(a), float(b), float(c))
{
	return (a * b) * (1 + c / 100);
}
float vt(float(a))
{
	return a * 0.13;
}
float tr(float(a))
{
	return a * 0.87;
}
int main()
{
	float a, b, c, d, i, f;
	cin >> a >> b >> c;
	d = per(a, b, c);
	i = vt(d);
	f = tr(d);
	cout << d << endl;
	cout << i << endl;
	cout << f << endl;
	return 0;
}