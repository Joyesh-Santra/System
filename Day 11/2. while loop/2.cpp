#include<iostream>

int main()
{
    //do while loop = do some block of code first , 
    //then repeat again if condition is true
    int number;

    while(number < 0){
        std::cout<<"Enter a positive : ";
        std::cin >> number;
    }
    std::cout<<"The # is "<<number;
    return 0;
}