#include<iostream>
using namespace std;

int main(){
    long long world_population,US_population;
    cout<<"Enter the world's population: ";
    cin>> world_population;
    cout<<"Enter the population of US: ";
    cin>>US_population;
    cout<<"The population of the US is ";
    cout<<double(US_population)*100/world_population<<"%";
    cout<<" of the world population.";
    return 0;
}