#include<iostream>
using namespace std;

int main(){
    int style;
    cout<<"Enter 1 for US style, 2 for EU style: ";
    cin>>style;
    while(style!=1&&style!=2){
        cout<<"Wrong number, please enter again, 1 for US style, 2 for EU style: ";
        cin>> style;
    }
    if(style == 1){
        cout<<"You would like to use US style."<<endl;
        float miles, gallon;
        cout<<"Please enter miles travelled: ";
        cin>>miles;
        cout<<"Please enter gallon cost: ";
        cin>>gallon;
        cout<<"You can travel "<<miles/gallon<<" miles per gallon."<<endl;
    }
    else if(style == 2){
        cout<<"You would like to use EU style."<<endl;
        float km, litres;
        cout<<"Please enter km you travelled: ";
        cin>>km;
        cout<<"Please enter litres cost: ";
        cin>>litres;
        cout<<"You will cost "<<litres*100/km<<" litres per 100km."<<endl;
    }
}