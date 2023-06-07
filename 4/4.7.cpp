#include<iostream>
#include<string>

struct Pizza{
    std::string Name;
    float Diameter;
    float Weight;

    Pizza(){
        std::cout<<"please type in the name of the pizza company: "<<std::endl;
        getline(std::cin,Name);
        std::cout<<"Please type in the Diameter of the pizza: "<<std::endl;
        std::cin>>Diameter;
        std::cout<<"Please type in the weight of the pizza: "<<std::endl;
        std::cin>>Weight;
        std::cout<<"Name: "<<Name<<std::endl;
        std::cout<<"Diameter: "<<Diameter<<std::endl;
        std::cout<<"Weight: "<<Weight<<std::endl;
    }

};


int main(){
    Pizza realpizza;
    return 0;
}