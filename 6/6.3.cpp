#include<iostream>
//it is a bad hard coding version, I thought.

//So for better solution, There should be a char array for the character choice
//and results stored in a string(maybe make them together as a structure.)
//and use loop to go through.

int main(){

    std::cout<<"Please enter one of the following choices: \n";
    std::cout<<"c) carnivore            p) pianist\n";
    std::cout<<"t) tree                 g) game\n";
    char ch;
    std::cin>>ch;
    while(true){
        if(ch=='c'){
            std::cout<<"Lion is a carnivore.\n";
            break;
        }
        else if(ch=='p'){
            std::cout<<"Pianist plays piano.\n";
            break;
        }
        else if(ch=='t'){
            std::cout<<"a maple is a tree\n";
            break;
        }
        else if (ch == 'g')
        {
            std::cout<<"League of Legend is a interesting game.\n";
            break;
        }
        
        else
        {
            std::cout<<"Please enter a c, p, t or g: ";
            std::cin>>ch;
            continue;
        }
        
    }
    
    
    
    return 0;
}