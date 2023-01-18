// ClassDZ.cpp : 

#include <iostream>
#include<cmath>
using namespace std;

class Point
{
    double x;
    double y;
public:

    void setX(double z)
    {
        if (z >= 0 && z < 100)
        {
            x = z;
        }
    }
    void setY(double d)
    {
        if (d >= 0 && d < 100)
        {
            y = d;
        }
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
    double distance()
    {
        double c;
        c = pow(x, 2) + pow(y, 2);
        return sqrt(c);
    }
};

double distance(Point obj)
{
    cout << "Введите координаты второй точки для нахождения растояния " << endl;
    double x1, y1,d;
    cin >> x1;
    cin >> y1;
    x1 = x1 - obj.getX();
    y1 = y1 - obj.getY();
    d = pow(x1, 2) + pow(y1, 2);
    return sqrt(d);



}



int main()
{
    setlocale(LC_ALL, "RUS");
    Point obj;
    int x, y;
    cout << "Введите координаты точки X|Y " << endl;
    cin >> x;
    cin >> y;

    obj.setX(x);
    obj.setY(y);

    cout << endl << obj.distance();
    cout << "\n---------------------------\n";
    cout << "Растояние между точками: " << distance(obj) << endl;
    
}


