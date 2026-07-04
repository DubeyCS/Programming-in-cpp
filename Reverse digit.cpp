#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter the digit: ";
    cin>>n;

    while (n>0) {
        int x=n%10;
        n=n/10;
        int rev=x;
        x=x*10;
        cout<<rev ;
    }
    return 0 ;
}