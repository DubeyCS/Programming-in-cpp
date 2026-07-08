#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(i%2!=0 && j%2!=0) {
                cout<<j<<" ";
            }
        }
        cout<<endl;

    }
    return 0 ;
}