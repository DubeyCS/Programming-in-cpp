#include <iostream>
using namespace std;

int main ()
{
    long long int n;
    cout<<"Enter the digit: ";
    cin>>n;
    int count=0;
    while (n>0) {
        n=n/10;
        count++;
    }
    cout<<"number of digits: "<<count<<endl;
    return 0 ;
}