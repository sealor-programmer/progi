#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n, m = 0;
    cin >> n;
    int *mas = new int[n + 1];
    mas[0] = 0;
    int *mass = new int[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        cin >> mas[i];
    }
    m = mas[n];
    for (int i = n - 1; i > 0; i--)
    {
        if(mas[i]>mas[i-1]){
            mass[i] = 1;
            m += mas[i];
        }
        if(mas[i]<mas[i-1] && mass[i+1]!=0){
            mass[i] = 0;
        }
        else {
            mass[i] = 1;
        }
    }
    mass[n] = 1;
    for (int i = 1; i < n + 1; i++)
    {
        cout << mass[i] << endl;
    }
    cout << m << endl;
    for (int i = 1; i < n + 1; i++)
    {
        if (mass[i] == 1)
        {
            cout << i << " ";
        }
    }
}