#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int t, S, n,Hg, L, d;
    double Q, W, H, h, V, l;
    cout << "ДОБРО ПОЖАЛОВАТЬ!" << ":\n";
    cout << "Введите t: ";
    if (!(cin >> t) && t <= 0)
    {
        cout << "ERROR";
        return 0;
    }
    cout << "Введите S : ";
    if (!(cin >> S) && S <= 0)
    {
        cout << "ERROR";
        return 0;
    }
    cout << "Введите n: ";
    if (!(cin >> n) && n <= 0)
    {
        cout << "ERROR";
        return 0;
    }
    cout << "Введите Hr: ";
    if (!(cin >> Hg) && Hg <= 0)
    {
        cout << "ERROR";
        return 0;
    }
    cout << "Введите L: ";
    if (!(cin >> L) && L <= 0)
    {
        cout << "ERROR";
        return 0;
    }
    cout << "Введите d: ";
    if (!(cin >> d) && d <= 0)
    {
        cout << "ERROR";
        return 0;
    }
    W = 0.02 * S + 0.05;
    Q = W / t;
    h = l * L / d * pow(V, 2) / 19.6;
    H = Hg + h + 5;
    
}


