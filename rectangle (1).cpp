#include<iostream>
using namespace std;

int main()
{
    int length;
    cout<<"enter the length: ";
    cin>>length;
    int width;
    cout<<"enter the width: ";
    cin>>width;
    int perimeter=2*(length+width) ;
    int area= length*width;
    if(perimeter>area) {
        cout<<"it's perimeter rectangle";
    }
    else if (area>perimeter) {
        cout<<"it's areal rectangle";
    }
    else {
        cout<<"it's just a rectangle";
    }
    return 0;
}