#include<iostream>

long int Factorial(int);

int main(){
    using namespace std;
    int number;
    cout << "Please input the number: \n";
    cin >> number;
    cout << Factorial(number);
}

long int Factorial(int num){
    if(num != 0)
        return num * Factorial(num-1);
    else return 1;
}