#include<iostream>

struct CandyBar{
    private:
        char * Brand;
        float Weight;
        int Calories;
    public:
        CandyBar(char * brand, float weight, int calories){
            Brand = brand;
            Weight = weight;
            Calories = calories;
        }
        void printCandyBar(){
            std::cout<<"Brand: "<<Brand<<std::endl;
            std::cout<<"Weight: "<<Weight<<std::endl;
            std::cout<<"Calories: "<<Calories<<std::endl;
        }
};


int main(){
    CandyBar snack = CandyBar("Mocha Munch",2.3,350);
    snack.printCandyBar();
}