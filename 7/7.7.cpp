#include<iostream>


const int Max = 10;

double * fill_array(double ar[], int limit);
void show_array(const double ar[], const double * end);
void revalue(double r, double ar[], const double * end);

int main(){
    using namespace std;
    double properties[Max];

    double * end;
    end = fill_array(properties, Max);
    show_array(properties, end);

    if(end){
        cout << "Enter revaluation factor: ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout<< "Done. \n";

    return 0;
}

double * fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i+1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated. \n";
            break;
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return &ar[i];
    
}

void show_array(const double ar[], const double * end)
{
    using namespace std;
    for (int i = 0; &ar[i] < end; i++)
    {
        cout << "Property #" << (i+1) << ": $";
        cout << ar[i] << endl;
    }
    
}

void revalue(double r, double ar[], const double * end)
{
    for (int i = 0; &ar[i] < end; i++)
    {
        ar[i] *= r;
    }
    
}