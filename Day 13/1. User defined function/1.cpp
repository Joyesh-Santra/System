#include<iostream>

void happyBirthday(std::string name , int age); // declaring happyBirthday function before the main function

int main()
{

    // function = a block of reusable code
    std::string name = "Joy";
    int age =21;
    
    happyBirthday(name,age);
    

    return 0;
}
void happyBirthday(std::string name, int age){
    std::cout<<"Happy Birthday to you!\n"<<name;
    std::cout<<"Happy Birthday to you!\n"<<name;

    std::cout<<"You are "<<age<<" years old"<<std::endl;


}