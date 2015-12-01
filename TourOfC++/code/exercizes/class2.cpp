#include <iostream>
#include <cmath>

class Point {

    public:
        virtual void print() = 0;
};

class Polar;
class Cartesian : public Point {

    private:
        double x;
        double y;

    public:
        Cartesian();
        Cartesian(double, double);
        void print();
        bool equal(const Cartesian &);
        Polar toPolar();
};

class Polar : public Point {

    private:
        double phi;     //անկյուն
        double rho;     //հեռավորություն

    public:
        Polar();
        Polar(double, double);
        void print();
        bool  equal(const Polar &);
        Cartesian toCartesian();
};

Cartesian::Cartesian():x(0), y(0) {}
Cartesian::Cartesian(double x1, double y1): x(x1), y(y1){}

void Cartesian::print()
{
    //տպում է կետը դեկարտյան կոորդինատներով
    std::cout << "C( " << x << "," << y << " )" << std::endl;
}

bool Cartesian::equal(const Cartesian &P1)
{
        return (x == P1.x && y == P1.y);
            
}

Polar Cartesian::toPolar ()
{
    double z = sqrt(x * x + y * y);
    double a = atan(y / x);   

    return Polar(a,z);
}

Polar::Polar():phi(0), rho(0){}
Polar::Polar(double phi1, double rho1): phi(phi1), rho(rho1){}

void Polar::print()
{
    //տպում է կետը բևեռային կոորդինատներով
    std::cout << "P( " << phi << "," << rho << " )" << std::endl;
}

bool Polar::equal(const Polar &P2)
{
    return (P2.phi == phi && P2.rho == rho);
        
}

Cartesian Polar::toCartesian ()
{
    double x = rho * cos(phi);
    double y = rho * sin(phi);

    return Cartesian(x,y);
}

int main ()
{
    Polar PPoint1(45,10);
    PPoint1.print();

    Cartesian Point1 = PPoint1.toCartesian();
    Point1.print();

    Cartesian Point2(5.25, 8.5);
    Point2.print();

    Polar PPoint2 = Point2.toPolar();
    PPoint2.print();

    std::cout << "PPonit1 և PPoint2 կետերը նույնն են թե՞ ոչ։ " << PPoint1.equal(PPoint2) << std::endl;
    std::cout << "Point1 և Point2 կետերը նույնն են թե՞ ոչ։ " << Point1.equal(Point2) << std::endl;

    return 0;
}
