#include <iostream>

class Vector {

public:
    Vector(int s): elem{new double[s]}, sz{s} {}
    double& operator[](int i){return elem[i];}
    int size() {return sz;}

private:
    double* elem;
    int sz;
};

double read_and_sum (int);

int main()
{
    read_and_sum(5);

    return 0;
}

double read_and_sum(int s)
{
    Vector v;
    double sum = 0;

    v.Vector(s);

    for(int i = 0; i <= v.size(); ++i)
        std::cin >> v[i];

    for(int i =0; i <= v.size(); ++i)
        sum += v[i];

    return sum;
}





