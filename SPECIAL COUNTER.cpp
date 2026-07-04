#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter the digit: ";
    cin>>n;
    int sumeven=0;
    int sumodd=0;
    int counteven=0;
    int countodd=0;

    while (n>0) {
        int x=n%10;
        n=n/10;
        if(x%2==0) {
            sumeven=sumeven+x;
            counteven++;
        }
        else {
            sumodd=sumodd+x;
            countodd++;
        }
    }

    cout<<"sum  of even digits: "<<sumeven<<endl;
    cout<<"sum  of odd digits: "<<sumodd<<endl;
    cout<<"Number of odd: "<<countodd<<endl;
    cout<<"Number of even: "<<counteven<<endl;

    return 0 ;
}