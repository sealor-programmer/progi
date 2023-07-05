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
            cout << "��� " << fa << " " << name << " "<< ot << endl;
            cout << "�����: " << money << endl;
            cout << "������ (%): " << rate << endl;
            cout << "������ (���): " << time << endl;
            cout << "�������� �����: " << gm() << endl;
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
    cout << "������� ���-�� �����: ";
    cin >> people;
    cout << endl;

    for (int i = 1; i <= people;i++){
        cout << "������� ���: ";
        cin >> f;
        cin >> n;
        cin >> o;
        cout << endl;
        cout << "������� ���-�� �����: ";
        cin >> money;
        cout << endl;
        cout << "������� ������: ";
        cin >> rate;
        cout << endl;
        cout << "������� �����: ";
        cin >> time;
        cout << endl;
        
        objA.set(f, n, o, money, rate, time);
        objA.show();
    }

    system("pause");
}
