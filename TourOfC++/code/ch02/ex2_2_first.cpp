#include <iostream>

struct Vector {
    int sz;             // էլեմենտների քանակը
    double* elem;       // ցուցիչ էլեմենտների վրա
};

void vector_init (Vector &, int);
double read_and_sum (int);

int main()
{
    double sum_v;

    sum_v = read_and_sum(5);
    std::cout << sum_v << std::endl;

    return 0;
}
    

void vector_init(Vector &V, int S)
{
    V.elem = new double[S];     //առանձնացնել s հատ double֊ներով զանգված
    V.sz = S;
}

double read_and_sum (int s)
{
    Vector v;

    vector_init(v,s);           // առանձնացնել s հատ տարր v֊ի համար

    for (int i = 0; i != s; ++i)
        std::cin >> v.elem[i];  // կարդալ էլեմենտների մեջ

    double sum = 0;

    for (int i = 0; i != s; ++i)
        sum += v.elem[i];       // ստանալ էլեմենտների գումարը

    return sum;
}


