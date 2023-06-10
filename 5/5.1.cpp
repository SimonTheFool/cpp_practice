#include <iostream>

int main(){
    int low,high;
    std::cout<<"please input the lower number you want: ";
    std::cin>>low;
    std::cout<<"please input the top number you want: ";
    std::cin>>high;
    int sum=0;
    for(int i=low;i<=high;i++){
        sum+=i;
    }
    std::cout<<"The sum is "<<sum<<std::endl;
    return 0;
}