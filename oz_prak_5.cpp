#include <iostream>
using namespace std;

float dan(float (a), float(b))
{
    return (a * b);
}

void main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    float a,b;
    int c[2];
    for (int i=0; i<2; i++)
    {
        cin >> a >> b;
        c[i]=dan(a,b);
    }
    if (c[0] > c[1])
    {
        cout << "1-ый заработал больше" << endl;
    }
    else
    {
        cout << "2-ой заработал больше " << endl;
    }
    cout << "суммa, заработанную двумя работниками вместе: " << c[0] + c[1] << endl;
}