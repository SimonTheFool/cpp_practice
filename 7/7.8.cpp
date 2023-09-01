#include<iostream>
#include<array>
#include<string>

const int Seasons = 4;
const char * Snames[4] = {"Spring","Summer","Fall","Winter"};

void fill(double [Seasons]);
void show(double [Seasons]);

int main(){
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
}

void fill(double a[Seasons])
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout<<"Enter "<<Snames[i]<< " expenses: ";
        cin >> a[i];
    }
    
}

void show(double a[Seasons])
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << a[i] << endl;
        total += a[i];
    }
    cout << "Total Expenses: $" << total << endl;
    
}