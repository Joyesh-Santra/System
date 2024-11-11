#include<iostream>

int main(){

    int correct = 8;
    int question = 10;
    double score = correct/(double)question *100; // We are using double explictly 

    std::cout<<score<<"%";
    return 0;
}