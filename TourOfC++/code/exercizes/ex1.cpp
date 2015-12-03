#include <iostream>

bool is_perfect(int);

int main()
{
    int N;

    std::cout << "Ներմուծել N֊ը ";
    std::cin >> N;

    for (int i = 1; i <= N; i++){
        if (is_perfect(i))
            std::cout << i << std::endl;
    }

    return 0;
}

bool is_perfect(int n)
{
    int sum = 0;

    for(int i = 1; i <= n/2; i++){
        if (n % i == 0)
            sum += i;
    }

   return n == sum;

}
