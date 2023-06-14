#include<iostream>

int main(){

    float Daphne = 100;
    float Cleo = 100;
    int years = 0;
    while(Cleo<=Daphne){
        Daphne+=10;
        Cleo*=1.05;
        years++;
    }
    std::cout<<"years: "<<years<<std::endl;
    std::cout<<"Daphne: "<<Daphne<<std::endl;
    std::cout<<"Cleo: "<<Cleo<<std::endl;


    return 0;
}