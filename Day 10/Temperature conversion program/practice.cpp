#include<iostream>

int main(){
    double temperature;
    char unit;
    std::cout<<"***********************Temperature Conversion***********************\n";
    std::cout<<" F = fahrenheit\n";
    std::cout<<" C = Celsius\n";
    std::cin>>unit;

    if(unit == 'f' || unit == 'F'){
        std::cout<<"Enter the temperature in Celsius";
        std::cin>>temperature;

        temperature = (1.8 * temperature)+ 32;
        std::cout<<"Temperature is "<<temperature<<"F\n";


    }
    else if(unit == 'C' || unit == 'c'){
        std::cout<<"Enter the temperature in Feherenheit";
        std::cin>>temperature;
        temperature = ( temperature -32)/1.8;
        std::cout<<"Temperature is "<<temperature<<"C\n";
    }
    else{
        std::cout<<"Write the unit in C or F \n";
    }
    return 0;
}