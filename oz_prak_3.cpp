#include <iostream>
using namespace std;

int dan(float(a),float(b),float(c))
{
    cout << "количество отработанных им часов: ";
    cin >> a;
    cout << "ставка почасовой оплаты (руб. в час): ";
    cin >> b;
    cout << "% премии: ";
    cin >> c;
    return 0;
   
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
	float a, b, c;
	dan(a, b, c);
    return 0;
}

