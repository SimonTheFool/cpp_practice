#include<iostream>

const int strsize = 30;

struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;         //0 = fullname, 1 = title, 2 = bopname

    void display_by_fullname(){
        std::cout<<fullname<<std::endl;
    }
    void display_by_title(){
        std::cout<<title<<std::endl;
    }
    void display_by_bopname(){
        std::cout<<bopname<<std::endl;
    }
    void display_by_preference(){
        switch(preference){
            case 0:
                display_by_fullname();
                break;
            case 1:
                display_by_title();
                break;
            case 2:
                display_by_bopname();
                break;
            default:
                break;
        }
    }
};

int main(){
    bop boplist[5] = {{"Wimp Macho","","",0},{"Raki Rhodes","Junior Programmer","",1},{"Celia Laiter","","MIPS",2},{"Hoppy Hipman","Analyst Trainee","",1},{"Pat Hand","","LOOPY",2}};
    std::cout<<"Benevolent Order of Programmers Report\n";
    std::cout<<"a. display by name     b. display by title\n";
    std::cout<<"c. display by bopname  d. display by preference\n";
    std::cout<<"quit\n";
    char ch;
    std::cout<<"Enter your choice: ";
    std::cin>>ch;
    while(ch!='q'){
        switch(ch){
            case 'a':
                for(int i=0;i<5;i++){
                    boplist[i].display_by_fullname();
                }
                break;
            case 'b':
                for(int i=0;i<5;i++){
                    boplist[i].display_by_title();
                }
                break;
            case 'c':
                for(int i=0;i<5;i++){
                    boplist[i].display_by_bopname();
                }
                break;
            case 'd':
                for(int i=0;i<5;i++){
                    boplist[i].display_by_preference();
                }
                break;
            default:
                break;
        }
        std::cout<<"Next choice: ";
        std::cin>>ch;
    }
    std::cout<<"Bye!\n";

}

//overall speaking, there's still something wrong with this code;