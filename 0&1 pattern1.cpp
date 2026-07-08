#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"enter the n: ";
    cin>>n;
    int a=0;
    int b=1;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(i%2!=0) {
                cout<<b<<" "<<a<<" ";
            }
            else {
                cout<<a<<" "<<b<<" ";
            }
        }
        cout<<endl;
    }
    return 0 ;
}