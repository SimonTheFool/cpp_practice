#include<iostream>
#include<string>
#include<vector>
//This Solution is quite bad, since it will loop through the vector twice.
struct patron{
    std::string name;
    double money;

};


int main(){
    std::vector<patron> patrons;
    std::cout<<"please input a character: q for quit, c for continue, p for print: ";
    char ch = ' ';
    

    while(ch!='q'){
        if(ch=='c'){
            
            patron p;
            std::cout<<"Please input the name: ";
            getline(std::cin>>std::ws,p.name);
            std::cout<<"Please input the money: ";
            std::cin>>p.money;
            patrons.push_back(p);
            
        }
        else if(ch == 'p'){
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
        else{

        }
        std::cout<<"please input a character: ";
        std::cin>>ch;
    }
    
    std::cout<<"bye!\n";
    return 0;
}
