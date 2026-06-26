#include<iostream>
using namespace std;

int main()
{
    int age1,age2,age3;
    cout<<"Enter age1: ";
    cin>>age1;
    cout<<"Enter age2: ";
    cin>>age2;
    cout<<"Enter age3: ";
    cin>>age3;
    if(age1<age2) {
        if(age1<age3) {
            cout<<"Person with age "<<age1<<" is youngest";
        }
        else {
            cout<<"Person with age "<<age2<<" is youngest";
        }
    }
    else {
        if(age2<age3) {
            cout<<"Person with age "<<age2<<" is youngest";
        }
        else {
            cout<<"Person with age "<<age3<<" is youngest";
        }
    }
    return 0;
}