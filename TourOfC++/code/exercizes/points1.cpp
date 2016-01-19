#include <iostream>
#include <cmath>

class Point {
    private:
        double x;
        double y;
        double z;

    public:
        Point(double, double, double); 
        double distance(Point);
};

Point::Point (double x1, double y1, double z1): x(x1), y(y1), z(z1){}

double Point::distance (Point nextP)
{
    double dx = std::abs(nextP.x-x);
    double dy = std::abs(nextP.y-y);
    double dz = std::abs(nextP.z-z);

    double d = std::sqrt(dx*dx + dy*dy + dz*dz);

    return d;
}

int main()
{
    Point point1(-5, 7, 12);
    Point point2(4, 2, 10);

    double d1 = point1.distance(point2);

    std::cout << "d1 = " << d1 << std::endl;

    return 0;
}



