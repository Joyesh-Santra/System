#include<iostream>

int main(){
    int number ;
    std::cout<<"Enter a number";
    std::cin>>number;
    number % 2==1 ? std::cout<<"ODD" : std::cout<<"EVEN";
    return 0;
}
