#include<iostream>

int main()
{
    double temp;
    char unit;

    std::cout<<"****************Temperature Conversion******************\n";
    std::cout<<"F = Fahrenheit \n";
    std::cout<<"C = Celsius\n";
    std::cout<<"What unit would you like to convert to: ";
    std::cin>>unit;

    if(unit =='f' || unit == 'f'){
        std::cout<<"Enter the temperature in Celsuius: ";
        std::cin>>temp;

        temp = (1.8 * temp)+ 32;
        std::cout<<"temperature is: "<<temp<<"F\n";


    }
    else if (unit == 'c' || unit == 'C'){
        std::cout<<"Enter the temperature in fahrenheit: ";
        std::cin>>temp;
        temp = ( temp -32)/1.8;
        std::cout<<"Temperatuer is" <<temp<<"C\n";
    }
    else{
        std::cout<<"Please enter in only C and F\n ";
    }
    std::cout<<"**********************************";
    return 0;
}