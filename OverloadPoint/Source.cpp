#include<iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}

    void Print() 
    {
        cout << "X: " << x << "\tY: " << y << endl;
    }

    int GetX() const { return x; }
    int GetY() const { return y; }
    void SetX(int _x) { x = _x; }
    void SetY(int _y) { y = _y; }

    Point operator+(const Point& b)
    {
        return Point(x + b.x, y + b.y);
    }

    Point operator+(int a)
    {
        return Point(x + a, y + a);
    }

    Point operator-(const Point& b)
    {
        return Point(x - b.x, y - b.y);
    }

    Point operator-(int a)
    {
        return Point(x - a, y - a);
    }

    Point operator*(int a)
    {
        return Point(x * a, y * a);
    }

    Point operator*(const Point& b)
    {
        return Point(x * b.x, y * b.y);
    }

    Point& operator++()
    {
        x += 10;
        y += 10;
        return *this;
    }

    Point operator++(int)
    {
        Point temp = *this;
        x += 10;
        y += 10;
        return temp;
    }

    Point& operator--()
    {
        x -= 10;
        y -= 10;
        return *this;
    }

    Point operator--(int)
    {
        Point temp = *this;
        x -= 10;
        y -= 10;
        return temp;
    }

    Point& operator+=(int a)
    {
        x += a;
        y += a;
        return *this;
    }

    Point& operator-=(int a)
    {
        x -= a;
        y -= a;
        return *this;
    }

    Point& operator*=(int a)
    {
        x *= a;
        y *= a;
        return *this;
    }
};

int main()
{
    Point a(1, 2);
    Point b(3, 4);

    a.Print();
    a += 100;
    a.Print();

    Point c = a + b;
    c.Print();

    c = a - b;
    c.Print();

    c = a * 10;
    c.Print();

    --a;
    a.Print();

    a--;
    a.Print();

    return 0;
}