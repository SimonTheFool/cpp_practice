#include<iostream>
using namespace std;
const float HUNDRED_KM_TO_MILES = 62.14;
const float GALLON_TO_LITRES = 3.875;

int main(){
    float litre_per_100km;
    cout<<"Please enter cost by litre per 100km: ";
    cin>>litre_per_100km;
    cout<<"mpg is "<<HUNDRED_KM_TO_MILES*GALLON_TO_LITRES/litre_per_100km;
    return 0;
}