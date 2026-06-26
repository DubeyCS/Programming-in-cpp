#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"enter x: ";
    cin>>x;
    if(x>99&&x<1000) {
        cout<<"it is a three digit number";
    }
    else {
        cout<<"it is not a three digit number";
    }
    return 0;
}