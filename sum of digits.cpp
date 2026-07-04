#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter the digit: ";
    cin>>n;
    int sum=0;
    while (n>0) {
        int x=n%10;
        n=n/10;
        sum=sum+x;
    }
    cout<<"sum of digits: "<<sum<<endl;
    return 0 ;
}