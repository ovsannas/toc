#include <iostream>
#include <cmath>

class Point {

    private:
        double xk;
        double yk;
        
    public:
        Point ();
        Point (double, double);
        void shift (double, double);
        double distance (Point);
        void print ();
};

Point::Point (): xk(0), yk(0) {}
Point::Point (double x, double y): xk(x), yk(y) {}

int main ()
{
    Point point1 (0, 0);
    Point point2 (4, 3);

    point1.shift (0, 0);
    point2.shift (0, 0 );

    point1.print ();
    point2.print ();

    double d = point1.distance(point2);

    std::cout << "point1 և point2 կետերի հեռավորությունը կլինի " << d << std::endl;

    return 0;
}

void Point::shift (double x, double y)
{
    xk += x;
    yk += y;
}

double Point::distance (Point p1)
{
    double a = std::abs(p1.xk - xk);
    double b = std::abs(p1.yk - yk);

    double d = std::sqrt(a*a + b*b);

    return d;
}


void Point::print ()
{
    std::cout << "( " << xk << "," << yk << " )" << std::endl;
}



