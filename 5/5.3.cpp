#include<iostream>

int main(){

    int x;
    int sum=0;
    do{
        std::cout<<"input a number: ";
        std::cin>>x;
        sum+=x;
        std::cout<<"the sum is "<<sum<<std::endl;
    } while(x!=0);
    return 0;
}