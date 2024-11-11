#include<iostream>

double square(double length);
int main()
{

    double length = 5.0;
    double area = square(length);

    std::cout<<"Area "<<area<<"cm^2\n";

    return 0;
}
double square(double length){
    return length *length;
}