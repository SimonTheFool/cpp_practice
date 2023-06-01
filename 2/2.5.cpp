#include<iostream>
using namespace std;

int convert(int cel){

    return round(cel*9/5)+32;
}

int main(){

    int cel;
    cout<<"Please enter a Celsius value: ";
    cin>>cel;
    cout<<cel<<" degree Celsius is "<<convert(cel)<<" degree Fahrenheit."<<endl;

    return 0;
}