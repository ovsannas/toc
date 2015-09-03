#include <iostream>
#include <cmath>

//Elem* next_elem();  //no argument; return a pointer to Elem (an Elem*) 
void exit(int);     //int argument; return nothing
double sqrt (double);   //double argument; return double

int main()
{
    double s2 = sqrt(2);    //call sqrt() with the argument double{2}
    double s3 = sqrt("three"); //error: sqrt() requires an argument of type double
    
}
