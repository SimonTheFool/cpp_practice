#include<iostream>

double add(double x, double y)
{
    return x + y;
}
double multiple(double x, double y)
{
    return x * y;
}
double minus(double x, double y)
{
    return x - y;
}

double calculate(double x, double y, double (*pf)(double, double))
{
    return pf(x, y);
}

int main(){
    double x = 2, y = 3;
    std::cout << calculate(x, y, multiple)<<std::endl;
    std::cout << calculate(x, y, minus)<<std::endl;
    std::cout << calculate(x, y, add)<<std::endl;
}