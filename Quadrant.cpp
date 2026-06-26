#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"enter x: ";
    cin>>x;
    cout<<"enter y: ";
    cin>>y;
    if(x>0 && y>0) {
        cout<<"Quadrant I";
    }
    else if(x<0 && y>0) {
        cout<<"Quadrant II";
    }
    else  if(x<0 && y<0) {
        cout<<"Quadrant III";
    }
    else if(x>0 && y<0) {
        cout<<"Quadrant IV";
    }
    else {
        cout<<"Origin";
    }
    return 0;
}