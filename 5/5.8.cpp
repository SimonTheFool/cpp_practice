#include<iostream>
#include<cstring>

int main(){
    std::cout<<"Enter word (to stop, type the word done) "<<std::endl;
    char * Enter;
    int Count=0;
    while(strcmp(Enter,"done")!=0){
        std::cin>>Enter;
        Count++;
    }
    Count-=1;
    std::cout<<Count<<std::endl;

    return 0;
}