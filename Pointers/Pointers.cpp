#include <iostream>

using namespace std;

struct Point {
    double x, y;
};

void addValue(double* pA, double b)
{
    (*pA) += b;
}

bool inputTriangleSides(double* pa, double* pb, double* pc)
{
    cout << "Enter Triangle sides: " << endl;
    cin >> *pa >> *pb >> *pc;
    double a = *pa, b = *pb, c = *pc;
    return (a > 0 && b > 0 && c > 0 && a < + b + c && b < c + a && c < a + b);

}

int inputGun(double* pAngle, double* pSpeed)
{
    cout << "enter angle and speed" << endl;
    double a, s;
    cin >> a >> s;
    if (a < 0)
        a = 0;
    if (s < 0 || s > 2000)
        s = 0;
    *pAngle = a;
    *pSpeed = s;
    return a > 0 && s > 0;
}

int main()
{
    double x = 0.53;
    cout << "x = " << x << " size: " << sizeof(x) << endl;
    Point a;
    a.x = x;
    a.y = 0;

    cout << " a.x = " << a.x << " a.y = "<< a.y << " size: " << sizeof(a) << endl;

    double* pX;
    pX = &x; //в переменную указатель на double записан адрес вещественной переменной

    cout << "x = " << *pX << " size: " << sizeof(pX)<< " pX = "<< pX << endl;
    Point* pPoint = &a;

    cout << "size: " << sizeof(pPoint) << endl;
    x += 1.5;
    *pX = *pX + 10;

    cout << "x = " << x << endl;

    //addValue(pX, 20);
    addValue(&x, 20);

    cout << "x = " << x << endl;
    double ta, tb, tc;
    if (inputTriangleSides(&ta, &tb, &tc))
        cout << "triangle " << ta << " " << tb << " " << tc << endl;
    else
        cout << "something goes wrong" << endl;
}
