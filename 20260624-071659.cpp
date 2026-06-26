#include<iostream>
using namespace std;

int main()
{
    int password ;
    int correct=1234;
    cout<<"Enter the your password & you have only 3 attempts: \n";
    cin>>password;
        if(password==correct) {
            cout<<"Access granted!";
        }
        else {
            cout<<" Access denied\n";
        }
    
    return 0;
}