#include<iostream>
using namespace std;

int main()
{
    char input;
    cout<<"enter the input ";
    cin>>input ;

    if(input>='A' && input<='Z') {
        cout<<"upper case";
    }
    else  if(input>=0 && input<=9) {
        cout<<"Digit";
    }
    else if(input>='a' && input<='z') {
        cout<<"lower case";
    }
    else {
        cout<<"special character";
    }
    return 0;
}