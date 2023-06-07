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
        CandyBar(){
            Brand = "Not set";
            Weight = 0;
            Calories = 0;
        }
        void printCandyBar(){
            std::cout<<"Brand: "<<Brand<<std::endl;
            std::cout<<"Weight: "<<Weight<<std::endl;
            std::cout<<"Calories: "<<Calories<<std::endl;
        }
};


int main(){
    CandyBar snack[3];
    snack[0]=CandyBar("Mocha Munch",2.3,350);
    snack[0].printCandyBar();
    snack[1].printCandyBar();
}