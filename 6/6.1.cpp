#include<iostream>
#include<cctype>

int main(){
    char ch;

    ch=std::cin.get();
    while(ch!='@'){
        if(isdigit(ch))
            std::cout<<ch;
        else if(islower(ch))
            std::cout<<(char) toupper(ch);
        else if(isupper(ch))
            std::cout<<(char) tolower(ch);
        else 
            std::cout<<ch;
        std::cin.get(ch);
    }

    return 0;
}