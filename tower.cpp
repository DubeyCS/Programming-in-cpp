#include <iostream>
using namespace std;
int tower(int i, int j) {
    return pow(i,j);
}
int main() {
    int i,j;
    cout<<"enter i \n"<<"enter j \n";
    cin>>i>>j;
    int result ;
    result =tower(i,j);
    cout<<"result is "<<result;
    return 0 ;
}