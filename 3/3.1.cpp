#include<iostream>
using namespace std;
const int NUM = 12;

int main(){
    int inch,ft;
    cout<<"Enter your height in inch:_";
    cin>>inch;
    ft = inch/12;
    inch = inch%12;
    cout<<"Your heith is "<<ft<<"'"<<inch<<"\""<<endl;
}