#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
    int x;
    double a, b;
    cout << "Введите первое число:" << endl;
        cin >> a >> endl;
    cout << "Введите второе число:" << endl;
        cin >> b >> endl;
    cout << "Выберите действие:" << endl;
    cout << "1 - сложение" << endl;
    cout << "2 - вычитание" << endl;
    cout << "3 - умножение" << endl;
    cout << "4 - деление" << endl;
    cin >> x >> endl;
    switch (x)
    {
    case 1:
        cout << MySum(a, b) << endl;
    case 2:
        cout << MySub(a, b) << endl;
    case 3:
        cout << MyMul(a, b) << endl;
    case 4:
        cout << MyDiv(a, b) << endl;
    }
system("pause");
return 0;
}
