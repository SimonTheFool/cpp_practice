#include<iostream>

int main(){

    int Number;
    std::cout<<"Enter number of rows: ";
    std::cin>>Number;
    for(int i=0;i<Number;i++){
        for(int j=0;j<Number-i-1;j++){
            std::cout<<".";
        }
        for(int k=0;k<i+1;k++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}