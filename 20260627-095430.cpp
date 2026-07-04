#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the n: ";
    cin>>n;
    int count1=0;
    int count2=0;
    int i=1;
    while (i<=n) {
        if(i%2==0) {
            cout<<i<<" even\n";
            count1++;
        }
        else {
            cout<<i<<" odd\n";
            count2++;
        }
        i++;
    }
    cout<<"Total even "<<count1<<endl;
    cout<<"Total odd "<<count2<<endl;
    return 0;
}