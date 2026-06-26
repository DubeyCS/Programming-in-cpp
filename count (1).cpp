#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter how many number you want: ";
    cin>>n;
    int x;
    int count = 0;
    for(int i=0; i<=n; i++) {
        cin>>x;
        if(x%2==0) {
            count++;
        }
        if (x==-1) {
                break;
            }
    }
    cout<<"Number of integers diviby 2 are: "<<count;
    return 0;
}