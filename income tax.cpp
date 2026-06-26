#include<iostream>
using namespace std;

int main()
{
    long long int income ;
    cout<<"Enter your income: ";
    cin>>income ;
    if(income>=2400000) {
        cout<<"Amount of tax you will pay "
            <<income*(37.0/100.0)<<" Rs\n";

    }
    else if (income>=1200000 && income<2400000) {
        cout<<"Amount of tax you will pay "
            <<income*(25.0/100.0)<<" Rs\n";
    }
    else if (income>=800000 && income<1200000) {
        cout<<"Amount of tax you will pay "
            <<income*(15.0/100.0)<<" Rs\n";
    }
    else {
        cout<<"You are not supposed to pay taxes you are here to take freebies!";
    }
    return 0;
}