#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<fstream>
//This Solution is quite bad, since it will loop through the vector twice.
struct patron{
    std::string name;
    long double money;

};

int main(){
    std::vector<patron> patrons;
    std::ifstream f;
    f.open("6.9.txt");
    if (!f.is_open())
    {
        std::cout<<"Open file failed."<<std::endl;
        exit(EXIT_FAILURE);
    }
    int count;
    f>>count;

    for (int i = 0; i < count; i++)
    {
        patron p;
        std::getline(f>>std::ws,p.name);
        f>>p.money;
        patrons.push_back(p);
    }
    f.close();


    int GrandCount=0;
            int Count=0;
            int pSize=patrons.size();
            std::cout<<"Grand patrons: \n\n";
            for (int i = 0; i < pSize; i++)
            {
                if (patrons[i].money>10000)
                {
                    std::cout<<patrons[i].name<<": "<<patrons[i].money<<std::endl;
                }
                GrandCount++;
                
            }
            if (GrandCount==0)
            {
                std::cout<<"None. "<<std::endl;
            }
            std::cout<<std::endl;
            std::cout<<"Patrons: \n\n";
            for (int i = 0; i < pSize; i++)
            {
                if (patrons[i].money<10000)
                {
                    std::cout<<patrons[i].name<<": "<<patrons[i].money<<std::endl;
                }
                Count++;
                
            }
            if (Count==0)
            {
                std::cout<<"None. "<<std::endl;
            }
}