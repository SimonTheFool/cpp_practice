#include<iostream>
const int SIZE = 20;


int Fill_array(double *, int length);
void Show_array(const double *, int length);
void Reverse_array(double *, int length);

int main(){
    using namespace std;
    double ar[SIZE];
    int length;
    cout << "Please input the length of array (smaller than "<< SIZE << "): \n";
    cin >> length;
    length = Fill_array(ar, length);
    Show_array(ar, length);
    Reverse_array(ar, length);
    Show_array(ar, length);
    Reverse_array(ar+1, length-2);
    Show_array(ar, length);
}

int Fill_array(double * ar, int length){
    using namespace std;
    int count = 0;
    double temp;
    cout << "Enter up to " << length << "values (q to quit): \n";
    for(count = 0; count< length; count++)
    {
        cout << "Value #" << (count+1) <<": ";
        cin>>temp;
        if(!cin)
            break;
        ar[count] = temp;
    }
    return count;
}

void Reverse_array(double *ar, int n)
{
    double temp;
    for (int i = 0, j = n-1; i < j; ++i, --j)
    {
        temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }
}

void Show_array(const double *ar, int n)
{
    using namespace std;
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    
}