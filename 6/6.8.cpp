#include<iostream>
#include<fstream>
#include<cstdlib>

int main(){
    std::ifstream f;
    f.open("6.8.txt");
    if (!f.is_open())
    {
        std::cout<<"File open failed."<<std::endl;
        exit(EXIT_FAILURE);
    }
    char ch;
    int count;

    while (!f.eof())
    {
        f>>ch;
        if(isalpha(ch))
            count++;
    }
    std::cout<<count<<std::endl;



    f.close();
    return 0;
}