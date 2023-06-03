#include<iostream>
#include<string>

int main(){
    std::string FullName;
    std::string FirstName;
    std::string LastName;

    std::cout<<"Enter your first name: ";
    std::getline(std::cin,FirstName);
    std::cout<<"Enter your last name: ";
    std::getline(std::cin,LastName);
    FullName = LastName+", "+FirstName;
    std::cout<<"Here's the information in a single string: "<<FullName<<std::endl;

    return 0;
}