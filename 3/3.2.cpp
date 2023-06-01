#include<iostream>
using namespace std;
const int NUM_FT_INCH = 12;
const double NUM_INCH_METER = 0.0254;
const double NUM_KG_POUND = 2.2;


int main(){
    int input_ft,input_inch;
    float input_pound;
    float height_meter;
    float weight_kg;

    cout<<"Enter your feet: ";
    cin>> input_ft;
    cout<<"Enter your inch: ";
    cin>> input_inch;
    height_meter = (input_ft*NUM_FT_INCH+input_inch)*NUM_INCH_METER;
    cout<<"Enter your weight in pound: ";
    cin>>input_pound;
    weight_kg = input_pound/NUM_KG_POUND;
    cout<<"Your BMI is "<<weight_kg/(height_meter*height_meter)<<endl;

    return 0;
}