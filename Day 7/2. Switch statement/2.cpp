#include<iostream>

int main(){

    char grade;

    std::cout<<"What's your grade?";
    std::cin>> grade;

    switch(grade){
        case 'A':
            std::cout<<"You did great ";
            break;
        case 'B':
            std::cout<<"You are impressive";
            break;
        default:
        std::cout<<"Please enter from a to b only ";

    }
    return 0;
}