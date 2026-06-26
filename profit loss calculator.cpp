#include<iostream>
using namespace std;

int main()
{    
    // profit/loss calculator 
    int price;
    cout<<"enter the price : ";
    cin>>price;
    int sales;
    cout<<"enter the sales : ";
    cin>>sales;
    if(sales>price) {
        cout<<"You have made profit of "
            <<(float) (( sales-price)*100)/price<<" %  ";
    }
    if (sales<price) {
        cout<<"You have made loss of "
            <<(float) (( price-sales)*100)/price<<" % ";
    }
    if(sales==price) {
        cout<<"You didn't made either profit nor loss money ";
    }
    return 0;
}