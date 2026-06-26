#include<iostream>
using namespace std;

int main()
{
    int x1;
    cout<<"enter the number x1: ";
    cin>>x1;
    int x2;
    cout<<"enter a number x2: ";
    cin>>x2;
    int x3;
    cout<<"enter a number x3: ";
    cin>>x3;
    if(x1>x2){
        if(x1>x3){cout<<x1<<" is greatest";}
        else{cout<<x3<<" is greatest";}
    }
    else{
    if(x2>x1){cout<<x2<<" is greatest";}
    else{}
    }
    return 0;
}