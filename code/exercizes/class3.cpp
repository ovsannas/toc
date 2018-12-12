#include <iostream>
#include <cmath>

class Cartesian {

    private:
        double x;
        double y;

    public:
        Cartesian();
        Cartesian(double, double);
        double distance (Cartesian);
        void print();
};

Cartesian::Cartesian(): x(0), y(0){}
Cartesian::Cartesian(double x1, double y1): x(x1), y(y1){}

void Cartesian::print()
{
    std::cout << "C( " << x << "," << y << " )" << std::endl;
}

double Cartesian::distance (Cartesian P1)
{
        double a = std::abs(P1.x - x);
        double b = std::abs(P1.y - y);

        double d = std::sqrt(a*a + b*b);

        return d;
}

Cartesian readPoint ()
{
    double x;
    double y;

    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y; 
    
    return Cartesian(x,y);
}

int main ()
{
    int n = 4;
    Cartesian P1 = readPoint();
    P1.print();

    double d = 0;

    for (int i = 1; i <= n; i++){

        Cartesian P = readPoint();
        P.print();
        d += P1.distance(P);
        P1 = P;
    }
    
    std::cout << d << std::endl;

    return 0;
}

