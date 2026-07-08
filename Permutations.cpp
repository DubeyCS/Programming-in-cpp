#include <iostream>
using namespace std;

double fact(int n) {
    double fact=1;
    for(int i=1; i<=n; i++) {
        fact=fact*i;
    }
    return fact;
}

double per(int t, int r) {
    return fact(t)/(fact(t-r));
}

int main ()
{
    int t;
    cout<<"Total number of things available:\n ";
    cin>>t;
    int r;
    cout<<"Number of things to permute:\n ";
    cin>>r;
    cout<<"Total possible permutations: "<<per(t,r);
    return 0 ;
}