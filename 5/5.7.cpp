#include<iostream>
#include<string>
#include<array>

struct Car {
    std::string Make;
    int Year;
    Car(){
        Year = 0;
    }
};

int main(){
    int ArSize;
    std::cout<<"How many cars do you wish to catalog: ";
    std::cin>>ArSize;
    std::cin.clear();
    Car * Cars = new Car[ArSize];
    std::string m;
    int y;
    


    for(int i=0;i<ArSize;i++){
        std::cout<<"Car #"<<i+1<<": "<<std::endl;
        std::cout<<"Please enter the make: ";
        getline(std::cin>>std::ws,m);
        std::cout<<"Please enter the Year: ";
        std::cin>>y;
        Cars[i].Make = m;
        Cars[i].Year = y;
        std::cout<<"Make: "<<Cars[i].Make<<std::endl;
        std::cout<<"Year: "<<Cars[i].Year<<std::endl;
    }

    delete [] Cars;
    return 0;
}