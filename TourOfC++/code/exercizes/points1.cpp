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
    Point P[] = {{2,-5,7}, {-4,8,3},{1,0,9}, {-6,10,5}, {7,3,2}};

    double Max = 0;
    int b = 0;
    int e = 0;
    for (int i = 0; i <= 4; i++)
        for (int j = i+1; j <= 4; j++)
        {
            double d = P[i].distance(P[j]);
            if (d > Max){
                Max = d;
                b = i;
                e = j;
            }
        }

    std::cout << "ամենամեծ հեռավորությունը՝ " << Max << std::endl;
    std::cout << P[b] << std::endl;
    std::cout << P[e] << std::endl;


    return 0;
}



