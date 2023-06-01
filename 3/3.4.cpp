#include<iostream>
using namespace std;
const int NUM_DAY_HOUR = 24;
const int NUM_HOUR_MINUTE = 60;
const int NUM_MINUTE_SECOND = 60;

int main(){
    long long seconds;
    int day,hour,minute,second;

    cout<<"Enter the number of seconds: ";
    cin>>seconds;
    second = seconds%NUM_MINUTE_SECOND;
    minute = seconds/NUM_MINUTE_SECOND;
    hour = minute/NUM_HOUR_MINUTE;
    minute = minute%NUM_HOUR_MINUTE;
    day = hour/NUM_DAY_HOUR;
    hour = hour%NUM_DAY_HOUR;
    cout<<seconds<<" seconds = ";
    cout<<day<<" days, "<<hour<<" hours, "<<minute<<" minutes, "<<second<<" seconds";
    






    return 0;
}