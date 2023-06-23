#include<iostream>
#include<string>


int main(){
    std::cout<<"Enter words (q to quit)";
    int vowels=0,consonants=0,others=-1;
    std::string input;
    while(input!="q"){
        if(!isalpha(input[0])){
            others++;
        }
        else{
            switch (input[0])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;
            
            default:
                consonants++;
                break;
            }
        }
        std::cin>>input;
    }
    std::cout<<"vowels: "<<vowels<<std::endl;
    std::cout<<"consonants: "<<consonants<<std::endl;
    std::cout<<"others: "<<others<<std::endl;


    return 0;
}