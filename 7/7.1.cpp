#include<iostream>
double h_mean(int, int);

int main(){
    using namespace std;
    
    int a,b;
    cout<<"please input two number: \n";
    cin>>a>>b;
    while (a!=0&&b!=0)
    {
        cout<<h_mean(a,b)<<endl;
        cout<<"please input two number: \n";
        cin>>a>>b;
    }
    cout<<"game end!";
    
}

double h_mean(int x, int y){
    return 2*double(x)*double(y)/(double(x)+double(y));
}