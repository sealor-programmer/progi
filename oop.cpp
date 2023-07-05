#include <iostream>
#include <string>

using namespace std;

class Money{
    private:
        string fa;
        string name;
        string ot;
        double money;
        double rate;
        int time;

        double gm(){
            double s = money;
            for (int k = 1; k <= time;k++){
                s *= (1 + rate / 100);
            }
            return s;
        }
    public:
        void show(){
            cout << "ФИО " << fa << " " << name << " "<< ot << endl;
            cout << "Вклад: " << money << endl;
            cout << "Ставка (%): " << rate << endl;
            cout << "Период (лет): " << time << endl;
            cout << "Итоговая сумма: " << gm() << endl;
            cout << "________________________________________________" << endl;
        }
        void set(string fam, string na, string ote, double m, double r, int t){
            fa = fam;
            name = na;
            ot = ote;
            money = m;
            rate = r;
            time = t;
        }
        
};

int main()
{
    
    system("chcp 1251 > nul");

    Money objA;
    string f;
    string n;
    string o;
    double money;
    double rate;
    int time;
    int people;
    cout << "Введите кол-во людей: ";
    cin >> people;
    cout << endl;

    for (int i = 1; i <= people;i++){
        cout << "Введите ФИО: ";
        cin >> f;
        cin >> n;
        cin >> o;
        cout << endl;
        cout << "Введите кол-во денег: ";
        cin >> money;
        cout << endl;
        cout << "Введите ставку: ";
        cin >> rate;
        cout << endl;
        cout << "Введите время: ";
        cin >> time;
        cout << endl;
        
        objA.set(f, n, o, money, rate, time);
        objA.show();
    }

    system("pause");
}
