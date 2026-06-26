#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of which table is to print: ";
    cin>>n;
    int i;
    for(int i=1; i<=10; i++) {
        if((n*i)%2==0) {
            cout<<n*i<<" even\n";
        }
        else {
            cout<<n*i<<" odd\n";
        }
    }
    return 0;
}