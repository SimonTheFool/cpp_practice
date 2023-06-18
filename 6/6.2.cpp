#include<iostream>
#include<array>

int main(){
    std::array<double,10> donation;
    int count = 0;
    std::cout<<"Please input the donation amount, end with any character: \n";
    while (std::cin>>donation[count])
    {
        count++;
    }
    double average=0;
    int CountLarger=0;

    for (int i = 0; i < count; i++)
    {
        std::cout<<donation[i]<<" ";
        average+=donation[i];
    }
    average/=count;
    for (int i = 0; i < count; i++)
    {
        if (donation[i]>average)
        {
            CountLarger++;
        }
        
    }
    
    std::cout<<"\n well";
    std::cout<<std::endl<<"Average is "<<average;
    std::cout<<std::endl<<CountLarger<<" number larger than average.\n";    


    return 0;
}