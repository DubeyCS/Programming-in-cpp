#include<iostream>
using namespace std;

int main()
{
    char input;
    cout<<"enter the lower case alphabet: ";
    cin>>input ;
    if(input=='a'||'e'||'i'||'o'||'u') {
        cout<<"Vowel";
    }
    else {
        cout<<"Consonant";
    }
    return 0;
}