#include<iostream>
using namespace std;

int main()
{
    int i;
    int n;
    cout<<"enter the numbers to add: ";
    cin>>n;
    int sum=0;
    for(int i=0; i<=n; i++) {
        sum = sum+i;
        //cout<<sum;
        if(sum%2==0) {
            cout<<"Sum is: "<<sum<<" and it is even\n";
        }
        else {
            cout<<"Sum is: "<<sum<<" and it is odd\n";
        }
    }
    return 0;
}