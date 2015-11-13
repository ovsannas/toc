#include <iostream>
#include <cmath>

struct Point {

    double x;
    double y;
};

double distance (Point, Point);
double radius (Point);
void shift (Point&, double, double);
void print (Point);

int main()
{
    Point a;
    Point b;

    std::cout << "Ներմուծել a և b կետերը․" << std::endl;
    std::cout << "a.x = ";
    std::cin >> a.x;
    std::cout << "a.y = ";
    std::cin >> a.y; 

    std::cout << "b.x = "; 
    std::cin >> b.x;      
    std::cout << "b.y = ";     
    std::cin >> b.y; 

    std::cout << "a և b կետերի հեռավորությունը կլինի " << distance(a,b) << std::endl;

    std::cout << "0-ից a շառավիղը կլինի " << radius(a) << std::endl;

    shift (a,-5, 7 );
    print (a);

 return 0;
}

double distance (Point p1, Point p2)
{
    double d = 0;

    double x = std::abs(p1.x - p2.x);
    double y = std::abs(p1.y - p2.y);

    d = std::sqrt(x*x + y*y);

    return d;
}

double radius (Point p)
{
    return distance (Point {0,0}, p);
}

void shift (Point& p1, double x, double y)
{
    p1.x += x;
    p1.y += y;
}

void print (Point p)
{
    std::cout << "(" << p.x << "," << p.y << ")" << std::endl;
}
