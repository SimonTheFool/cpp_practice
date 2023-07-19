#include<iostream>
// 3 array function

int input_ar(int *);
void display(const int *, int);
void show_avg(const int *, int);

int main(){
    int ar[10];
    int count = input_ar(ar);
    display(ar, count);
    show_avg(ar,count);
}

int input_ar(int * ar){
    using namespace std;
    int count = 0;
    int num;
    for(int i=0;i<10;i++){
        cout<<"input next number, enter 0 to end\n";
        cin>>num;
        if(num==0)
            break;
        else{
            ar[i]=num;
            count++;
        }
    }


    return count;
}

void display(const int * ar, int count){
    using namespace std;
    for (int i = 0; i < count; i++)
    {
        cout<<ar[i]<<' ';
    }
    cout<<endl;
    
}

void show_avg(const int * ar, int count){
    using namespace std;
    double sum;
    for (int i = 0; i < count; i++)
    {
        sum += ar[i];
    }
    cout<<"The average result is: "<<sum/count<<endl;
    
}