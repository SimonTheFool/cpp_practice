#include<iostream>
#include<array>

int main(){
    std::array<int,3> x={0,0,0};
    std::cout<<"please input the record: \n";
    std::cin>>x[0]>>x[1]>>x[2];
    std::cout<<(x[0]+x[1]+x[2])/3<<std::endl;
}
