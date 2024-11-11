#include<iostream>
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);
int main()
{
    
    bakePizza("pepperoni");
    bakePizza("Panner chilli"," Black berry");
    return 0;
}
void bakePizza(){
    std::cout<<"Here is your pizza !\n";
}

void bakePizza(std::string topping1){
    std::cout<<"Here is your "<<topping1<<" pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout<<"Here is your "<<topping1<<" and "<<topping2<<"Pizza ";
}
/*  it is valid for function to share the same name but you need different set of parameters
 A function name + parameters is knows as a function signature
    */