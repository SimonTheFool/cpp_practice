#include<iostream>
#include<array>

int main(){
    const int ArSize = 100;
    std::array<long double,ArSize> factorials;
    factorials[0]=factorials[1]=1;
    std::cout<<0<<"! = "<<factorials[0]<<std::endl;
    std::cout<<1<<"! = "<<factorials[1]<<std::endl;
    for(int i = 2;i<=ArSize;i++){
        factorials[i]=factorials[i-1]*i;
        std::cout<<i<<"! = "<<factorials[i]<<std::endl;
    }

    return 0;
}
// 100! = 9.33262e+157