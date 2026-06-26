#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int i;
    for(int i=n; i<=10*n; i++) {
        if(i%n==0) {
            cout<<i<<endl;
        }
    }
    return 0;
}