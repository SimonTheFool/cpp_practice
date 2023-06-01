#include<iostream>
#include<string>
using namespace std;

int main(){

    string first_name;
    string last_name;
    char grade;
    int age;

    std::cout<<"What is your first name? ";
    getline(std::cin,first_name);
    std::cout<<"What is your last name? ";
    getline(std::cin,last_name);
    std::cout<<"What letter grade do you deserve? ";
    std::cin>>grade;
    std::cout<<"What is your age? ";
    std::cin>>age;

    std::cout<<"Name: "<<last_name<<", "<<first_name<<std::endl;
    std::cout<<"Grade: "<<char(grade+1)<<std::endl;
    std::cout<<"Age: "<<age<<std::endl;
    return 0;
}