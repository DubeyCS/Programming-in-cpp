#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of which table is to print: ";
    cin>>n;
    int i;
    int count1=0;
    int count2=0;
    for(int i=1; i<=10; i++) {
        if((n*i)%2==0) {
            cout<<n*i<<" even\n";
            count1++;
        }
        else {
            cout<<n*i<<" odd\n";
            count2++;
        }
    }
    cout<<"Total number of evens: "<<count1<<endl;
    cout<<"Total number of odds: "<<count2<<endl;
    return 0;
}