#include<iostream>
#include<string.h>
#include<cctype>
#include<regex>
// lower than 5000 tvarps no tax
// 5001-15000 tvarps 10%
// 15001-35000 tvarps 15%
// 35001 tvarps and above 20%

int main(){
    std::cout<<"Please input your income, if you input negative number or non-number, program will end. \n";
    std::string str = "0";
    std::regex regex_pattern("[0-9]+");
    int income;
    std::cout << "Input a positive number: ";
    std::cin >> str;
    while(regex_match(str,regex_pattern))
    {
        income = stoi(str);
        if(income<5000){
            std::cout<<"tax is 0\n";
        }
        else if(income<15000){
            std::cout<<"tax is "<<(double) (income-5000)*0.1<<std::endl;
        }
        else if(income<35000){
            std::cout<<"tax is "<<(double) (income-15000)*0.15+1000<<std::endl;
        }
        else{
            std::cout<<"tax is "<<(double) (income-35000)*0.2+4000<<std::endl;
        }
        std::cout << "Input a positive number: ";
        std::cin >> str;
    };

    return 0;
}