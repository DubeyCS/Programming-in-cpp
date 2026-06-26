#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"enter a number: ";
    cin>>x;
    if(x%5==0 && x%3== 0) {
        cout<<" it is divisible by both 5 and 3 ";
    }
    else {
        cout<< " it is not divisible by 5 and 3 ";
    }
    return 0;
}