#include <iostream>

bool parzTiv (int);

int main()
{
    int n;

    //ներմուծենք որևէ ամբողջ թիվ
    std::cout << "n = ";
    std::cin >> n; 

    if (parzTiv(n))
        std::cout << n << "-ը պարզ թիվ է" << std::endl;
    else 
        std::cout << n << "֊ը պարզ թիվ չէ" << std::endl;

    return 0;
}


bool parzTiv(int N)
{
    if (N <=2)
        return true;
    if (N % 2 == 0)
        return false;

    for (int i = 3; i*i < N; i++)
    {
        if (N % i == 0)
            return false;
    }
    return true;         
}
