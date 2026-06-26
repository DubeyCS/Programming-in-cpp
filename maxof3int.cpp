#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter a\n"
        <<"enter b\n"<<"enter c\n";
    cin>>a>>b>>c;
    if(a>b&&a>c) {
        cout<<"greatest is a";
    }
    else if (b>a&&b>c) {
        cout<<"greatest is b";
    }
    else {
        cout<<"greatest is c";
    }
    return 0;
}