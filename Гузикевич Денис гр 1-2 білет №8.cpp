#include <iostream> 
using namespace std;

int main()
{
    setlocale(0, ".1251");
    int a[8];

    int dobutok = 1, sum = 0;
    
    cout << "Введiть елементи масиву \n";
    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
        if(a[i] > 0)
            dobutok *= a[i];
    }
    cout << "Добуток додатних чисел масиву = " << dobutok << endl;
   
    for (int i = 0; i < 8; i++)
        sum += a[i];
    cout << "Сума eлементiв масиву = " << sum << endl;

    int k = 8 - 1;
    int p = 8 - 2;
    if (8 % 2 == 0)
    {
        k = 8 - 2;
        p = 8 - 1;
    }
    for (int i = 0; i < 8 - 2; i += 2)
        for (int j = k; j > i; j -= 2)
            if (a[j] < a[j - 2])
            {
                int t = a[j];
                a[j] = a[j - 2];
                a[j - 2] = t;
            }
    for (int i = 1; i < 8 - 2; i += 2)
        for (int j = p; j > i; j -= 2)
            if (a[j] < a[j - 2])
            {
                int t = a[j];
                a[j] = a[j - 2];
                a[j - 2] = t;
            }
    cout << "Масив у порядку зростання по парним та непарним числам: \n" << endl;
    for (int i = 0; i < 8; i++)
        cout << a[i] << endl;
}
