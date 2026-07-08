#include <iostream>
using namespace std;
// Pascals triangle

double fact(int n) {
    double fact=1;
    for(int i=1; i<=n; i++) {
        fact=fact*i;
    }
    return fact;
}

double comb(int t, int r) {
    return fact(t)/(fact(t-r)*fact(r));
}

int main ()
{
    int n;
    cout<<"Enter the number of lines you want in pascals triangle: ";
    cin>>n;
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=n-i; j++) {
            cout<<" ";
        }
        for(int j=0; j<=i; j++ ) {
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}