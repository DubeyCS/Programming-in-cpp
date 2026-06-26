#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"enter a number: ";
    cin>>x;
    if(x%5==0) {
        cout<<"divisible by five";
    }
    else {
        cout<<"it is not divisible by five";
    }
    return 0;
}