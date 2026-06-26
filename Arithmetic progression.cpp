#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter a: ";
    cin>>a;
    int n;
    cout<<"enter n: ";
    cin>>n;
    int d;
    cout<<"enter common difference: ";
    cin>>d;
    int i;
    for(int i=a; i<=n; i+=d) {
        cout<<i<<endl;
    }
    return 0;
}