#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter the digit: ";
    cin>>n;
    int product=1;
    while (n>0) {
        int x=n%10;
        n=n/10;
        product=product*x;
    }
    cout<<"product of digits: "<<product<<endl;
    return 0 ;
}