#include<iostream>
using namespace std;

int main()
{
    double volume;
    double radius;
    cout<< "enter radius: ";
    cin>>radius;
    volume = 4*(3.14159*radius*radius*radius)/3;
    cout<<"Volume of sphere is : "<<volume <<"\n";
    return 0;
}