//Նույն անուններով և տարբեր արգումենտներով ֆունկցիաներ
#include <iostream>
#include <string>

void print(int);    //արգումետնում ստանում է ամբողջ թիվ
void print(double); //արգումենտում ստանում է սահող ստորակետով թիվ
void print(std::string); //արգումենտում ստանում է տող

void user()
{
    print(42);      //կանչվում է print(int)֊ը
    print(9.65);    //կանչվում է print(double)֊ը
    print("D is for Digital");  //կանչվում է print(string)֊ը
}

void print(int x)
{
    std::cout << x << std::endl;
}

void print(double x)
{
    std::cout << x << std::endl;
}

void print(std::string x)
{
    std::cout << x << std::endl;
}

int main()
{
    user();
}
