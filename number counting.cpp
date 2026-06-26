#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter how many number you want: ";
    cin>>n;
    int x;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for(int i=0; i<n; i++) {
        cin>>x;
        if(x>0) {
            count1++;
        }
        else if(x<0) {
            count2++;
        }
        else if(x==0) {
            count3++;
        }
        if (x==-1) {
            break;
        }
    }
    cout<<"Number of positive integers : "<<count1<<endl;
    cout<<"Number of negative integers : "<<count2<<endl;
    cout<<"Number of zeros: "<<count3<<endl;
    return 0;
}