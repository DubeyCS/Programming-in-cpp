#include <iostream>
using namespace std;

int main ()
{
    int x;
    cout<<"enter x: ";
    cin>>x;
    int y;
    cout<<"enter y: ";
    cin>>y;
    int a=0;
    int b=0;
    if((a+2==x && b==y)||(a==x && b+2==y) ){
    cout<<"Yes";
    }
    return 0 ;
}