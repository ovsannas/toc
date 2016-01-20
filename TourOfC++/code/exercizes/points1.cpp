#include <iostream>
#include <cmath>
#include <vector>

class Point {
    private:
        double x;
        double y;
        double z;

    public:
        Point();
        Point(double, double, double); 
        double distance(Point &);
        void print();
};

Point::Point(): x(0), y(0), z(0) {}
Point::Point (double x1, double y1, double z1): x(x1), y(y1), z(z1){}

double Point::distance (Point & nextP)
{
    double dx = nextP.x-x;
    double dy = nextP.y-y;
    double dz = nextP.z-z;

    double d = std::sqrt(dx*dx + dy*dy + dz*dz);

    return d;
}

void Point::print()
{
    std::cout << "{" << x << "," << y << "," << z << "}";
    std::cout << std::endl;
}

double MaxDistance(std::vector<Point> &, Point &, Point &);


int main()
{
    int x;
    int y;
    int z;
    int n;

    std::cout << "n: ";
    std::cin >> n;

    std::vector<Point> vP;
    for(int i = 0; i < n; i++)
    {
        std::cout << "x = ";
        std::cin >> x;
        std::cout << "y = ";
        std::cin >> y;
        std::cout << "z = ";
        std::cin >> z;

        Point P1(x,y,z);
        vP.push_back(P1);
    }

    Point bP;
    Point eP;

    double D = MaxDistance (vP,bP,eP);

    std::cout << "Ամենամեծ հեռավորությունը՝ " << D << std::endl;

    bP.print();
    eP.print();


    return 0;
    
}


double MaxDistance (std::vector<Point> &P, Point &Pb, Point &Pe)
{
    double Max = 0;
        
    for (int i = 0; i < P.size(); i++)
        for (int j = i+1; j < P.size(); j++)
        {
            double d = P[i].distance(P[j]);
            if (d > Max){
                Max = d;
                Pb = P[i];
                Pe = P[j];
            }
        }
    

    return Max;
}



