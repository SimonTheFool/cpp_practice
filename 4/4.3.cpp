#include<iostream>
#include<cstring>

int main(){

    
    const int ArSize = 20;
    char FirstName[ArSize];
    char LastName[ArSize];
    std::cout<<"Enter your first name: ";
    std::cin.getline(FirstName,ArSize);
    std::cout<<"Enter your last name: ";
    std::cin.getline(LastName,ArSize);
    std::strcat(LastName,", ");
    std::strcat(LastName,FirstName);
    std::cout<<"Here's the information in the single string: "<<LastName<<std::endl;

    return 0;
}