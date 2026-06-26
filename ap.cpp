#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i;
    int n;
    cout<<"enter n terms: ";
    cin>>n;
    int a=5;
    cout<<"enter a the first terms: ";
    for(int i=1; i<=n; i++) {
        cout<<a<<endl;
        a=a+3;
    }
    return 0;
}