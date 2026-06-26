#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"enter x";
    cout<<"enter y";
    cin>>x>>y;
    char operator;
    cout<<"choose operator: ";
    operator == '+';
    operator == '-';
    operator == '*';
    operator == '/';
    operator == '%';
    if(operator == '+') {
        cout<<x+y;
    }
    else if(operator =='-' ) {
        cout<<x-y;
    }
    else if(operator == '*') {
        cout<<x*y;
    }
    else if(operator == '/') {
        cout<<x/y;
    }
    else if(operator == '%') {
        cout<<x%y;
    }
    else {
        cout<<"Unable to do";
    }
    return 0;
}