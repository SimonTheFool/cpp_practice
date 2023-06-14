#include<iostream>
#include<array>
#include<string>

int main(){
    const std::array<std::string,12> month = {"January","Febrary","March","April","May","June","July","August","September","October","November","December"};
    int SellCount[3][12];
    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++){
            std::cout<<"Please enter the sell number of Year "<<i+1<<" "<<month[j]<<": ";
            std::cin>>SellCount[i][j];
        }
    }
    int SumYear = 0;
    int SumTotal = 0;

    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++){
            SumYear+=SellCount[i][j];
        }
        std::cout<<"The year sell for year "<<i+1<<": "<< SumYear<<std::endl;
        SumTotal+=SumYear;
        SumYear=0;
    }
    std::cout<<"The overall sell count is "<<SumTotal<<std::endl;

    return 0;
}