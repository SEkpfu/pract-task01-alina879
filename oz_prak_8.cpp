#include<iostream>
using namespace std;

float per(float (a), float (b))
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
int main()
{
 setlocale(LC_ALL, "ru_RU.UTF-8");
 float* a, * b, * c;
 float mini, men, maxi, bol, f, z, obsh, n;
 cout << "Сколько всего работников: " << endl;
 cin >> n;
 a = new float[n];
 b = new float[n];
 c = new float[n];
 mini = 99999999999;
 maxi = -9999999999;
 obsh = 0;
 for (int i = 0; i < n; i++)
 {
  cout << "Номер работника: " << i + 1 << ": " << endl;
  cout << "Количество часов: ";
  cin >> a[i];
  cout << "Ставка: ";
  cin >> b[i];
  f = tr(per(a[i], b[i]));
  z = vt(per(a[i], b[i]));
  if (f < mini)
  {
   mini = f;
   men = i + 1;
  }
  if (f > maxi)
  {
   maxi = f;
   f = i + 1;
  }
  c[i] = f;
  obsh += z;
  cout << " " << endl;
 }
 cout << "Меньше всего получил работник номер " << men << endl;
 cout << "Больше всего получил работник номер " << bol << ","<< maxi <<"рублей"<< endl;
 cout << "Все, кто получил более 50000 рублей:" << endl;
 for (int i = 0; i < n; i++)
 {
  if (c[i] > 50000)
  {
   cout << "Работник номер " << i + 1 << " получил " << c[i] << endl;
  }
 }
 cout << "Общая сумма налога: " << obsh << endl;
 return 0;
}