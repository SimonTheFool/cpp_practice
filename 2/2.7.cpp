#include<iostream>
using namespace std;

void showTime(int hr, int min){
    cout<<"Time: "<<hr<<":"<<min<<endl;
}

int main(){
    int hr,min;
    cout<<"Enter the number of hours: ";
    cin>>hr;
    cout<<"Enter the number of minutes: ";
    cin>>min;
    showTime(hr,min);
    return 0;
}
// it doesn't check if the minutes is over 60.