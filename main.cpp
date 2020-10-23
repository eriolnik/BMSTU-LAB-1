#include <iostream>
#include <string>

using namespace std;

bool polindrom(string a)//10
{
    int l = a.length();
    for (int i = 0; i < l / 2; ++i) {
        if (a[i] != a[l - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string st;
    cout << "Task 2.10" << " Самое последнее задание написано в начале!"<< endl;
    cin >> st;
    if (polindrom(st)) {
        cout << "This is polindrom!";
    } else {
        cout << "Sorry, this is not polindrom!" << endl;
    }
    cout << "Task 1.1" << endl;
    cout << "1 13 49" << endl;

    char a;
    cout << "Task 1.2" << endl;
    cin >> a;

    cout << "1" << a << "13" << a << "49" << endl;

    double m, k, g;
    cout << "Task 1.3" << endl;
    cin >> m >> k >> g;
    cout << m << " " << k << " " << g << endl;

    int aa, x, y, z;
    cout << "Task 1.4" << endl;
    cin >> aa >> z;
    x = 12 * aa * aa + 7 * aa - 12;
    y = 3 * z * z * z + 4 * z * z - 11 * z + 1;
    cout << x << " " << y << endl; //4

    double v, mass, pa;
    cout << "Task 2.1" << endl; //2.1
    cin >> mass >> v;
    pa = mass / v;
    cout << pa << endl;

/* //TASK 2.2 (запускать отдельно)
    int Solve(double a1, double b1, double x1) {
        if (a1 == 0 && b1 != 0)
            return -3;
        if (a1 == 0 && b1 == 0)
            return -2;
        if (b1 == 0 && a1 != 0)
            return -1;
        x1 = -b1 / a1;
        return 1;
    }

    int main() {
        int a1, b1;
        cout << "Input a1,b1:";
        cin >> a1 >> b1;
        double x1 = 0;
        int temp = Solve(a1, b1, x1);
        if (temp == 1)
            cout << "Task 2.2" << endl;
        cout << "x1 = " << x1 << std::endl;
        system("pause");
    }
*/
    int x11, x12, y11, y12, d;
    cout << "Task 2.3" << endl;
    cout << "Веди x11, x12 , y11, y12" << endl;
    cin >> x11>>x12>>y11>>y12;
    d = sqrt(((x11-x12)*(x11-x12))+((y11-y12)*(y11-y12)));
    cout << d << endl;

    int aaa,bbb,ccc,ddd,p,h;
    cout << "Task 2.4" << endl;
    cin >> aaa>>bbb>>h;
    ddd = abs(aaa - bbb) / 2;
    ccc = sqrt(h*h + ddd*ddd);
    p = 2 * (ccc + aaa + bbb);
    cout << p << endl;

    double R, r, S;
    cout << "Task 2.5" << endl;
    cin >> R >> r;
    S = 3.14*(R*r-R*R);
    cout << S << endl;

    int A, V, Ss;
    cout << "Task 2.6" << endl;
    cin >> A;
    V = A * A * A;
    Ss = A * A;
    cout << "Объем" << V << " " << "Площадь" << Ss << endl;

    int STORONA, perimetr;
    cout << "Task 2.7" << endl;
    cin >> STORONA;
    perimetr = 4 * STORONA;
    cout << perimetr<< endl;


    int Radius, Diametr;
    cout << "Task 2.8" << endl;
    cin >> Radius;
    Diametr = 2 * Radius;
    cout << Diametr << endl;

    {
        string name;
        cout << "Task 2.9" << endl;
        cout << "Имя Студента: ";
        cin >> name;
        cout << "Hello, " << name << "! My name is C++." << endl;
    }


    return 0;
}
