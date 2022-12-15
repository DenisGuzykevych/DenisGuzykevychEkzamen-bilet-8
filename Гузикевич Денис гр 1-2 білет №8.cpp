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
    cout << "Сума eлементiв масива = " << sum << endl;
}
