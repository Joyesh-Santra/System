#include<iostream>

int main(){
    // pseudo-random = NOT truly random (but close)
    srand(time(NULL)); // random number geneartor

    int num =(rand()%6)+1;

    std::cout<<num;

    return 0;
    

}