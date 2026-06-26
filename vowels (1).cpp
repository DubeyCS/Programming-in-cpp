#include<iostream>
using namespace std;

int main()
{
    char input;
    cout<<"enter the lower case alphabet: ";
    cin>>input ;
    if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u') {
        cout<<"Vowel";
    }
    else {
        cout<<"Consonant";
    }
    return 0;
}