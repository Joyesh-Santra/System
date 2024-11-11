#include<iostream>
void printNum();

int main()
{
        int myNum = 1;
        printNum();
    // Local variables = declared inside a function or block()
    // Global variables = declared outside of all functions

    return 0;
}
void printNum( ){
    int myNum = 2;
    std::cout<<myNum;
}