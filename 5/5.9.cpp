#include<iostream>
#include<string>

int main(){
    std::cout<<"Enter word (to stop, type the word done) "<<std::endl;
    std::string Enter;
    int Count=0;
    while(Enter!="done"){
        std::cin>>Enter;
        Count++;
    }
    Count-=1;
    std::cout<<Count<<std::endl;

    return 0;
}