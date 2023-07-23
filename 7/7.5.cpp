#include<iostream>

long int Factorial(int);

int main(){
    using namespace std;
    int number;
    cout << "Please input the number: \n";
    while(cin >> number && number >= 0){
        cout << Factorial(number) << endl;
        cout << "Please input the number: \n";
    }
}

long int Factorial(int num){
    if(num != 0)
        return num * Factorial(num-1);
    else return 1;
}