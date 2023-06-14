#include<iostream>
#include<array>
#include<string>

int main(){
    std::array<std::string,12> month = {"January","Febrary","March","April","May","June","July","August","September","October","November","December"};
    int SellCount[12];
    for(int i=0;i<12;i++){
        std::cout<<"The sell number of "<<month[i]<<": ";
        std::cin>>SellCount[i];
    }
    int sum = 0;
    for(int i=0;i<12;i++){
        sum+=SellCount[i];
    }
    std::cout<<"Overall sell number is "<<sum<<std::endl;
    return 0;
}