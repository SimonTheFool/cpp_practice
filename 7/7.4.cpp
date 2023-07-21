#include<iostream>
const int field_num = 47;
const int field_pick = 5;
const int range_num = 27;
const int range_pick = 1;

long double probability(unsigned numbers, unsigned pickes);
int main(){
    using namespace std;
    double total, choices;
    cout << "pick "<< field_pick << " out of " << field_num
         << " and pick " << range_pick << " out of " << range_num
         << " chance is "
         << probability(range_num,range_pick) * probability(field_num,field_pick);
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks ; p > 0; p--)
    {
        result = result * n / p;
    }
    return result;

}