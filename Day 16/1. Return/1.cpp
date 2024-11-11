#include<iostream>

std::string concatStrings(std::string string1, std::string string2);

int main(){
    std::string firstname=" Great";
    std::string lastname="Joy";
    std::string fullname= concatStrings(firstname,lastname);

    std::cout<<"Hello"<<fullname;

    return 0;
}
std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}