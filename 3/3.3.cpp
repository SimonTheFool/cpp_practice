#include<iostream>
using namespace std;

const int NUM_DEGREE_MINUTE = 60;
const int NUM_MINUTE_SECOND = 60;

int main(){
    int degree,minute,second;
    double degrees;
    cout<<"Enter a latitude in degrees, minutes, seconds: "<<endl;
    cout<<"First, enter the degrees: ";
    cin>>degree;
    cout<<"Second, enter the minutes of arc: ";
    cin>>minute;
    cout<<"Finally, enter the seconds of arc: ";
    cin>>second;
    cout<<degree<<" degrees, "<< minute<<" minutes, "<<second<<" seconds = ";
    cout<<double(degree+double(minute)/NUM_DEGREE_MINUTE+double(second)/(NUM_DEGREE_MINUTE*NUM_MINUTE_SECOND));
    cout<<" degrees";


    return 0;
}