#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    int x;
    int countA = 0;
    int countB = 0;
    int countC = 0;
    int countF = 0;
    for(int i=0; i<n; i++) {
        cin>>x;
        if(x>=90 && x<=100) {
            countA++;
        }
        else if(x>=75 && x<90) {
            countB++;
        }
        else if(x>=60 && x<75) {
            countC++;
        }
        else if (x<60) {
            countF++;
        }
    }
    cout<<"Number of grade A students : "<<countA<<endl;
    cout<<"Number of grade B students : "<<countB<<endl;
    cout<<"Number of grade C students: "<<countC<<endl;
    cout<<"Number of failed students: "<<countF<<endl;
    return 0;
}