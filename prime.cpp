#include <iostream>
using namespace std;

int main()
{
    int countPrime = 0;
    int countComposite = 0;

    for(int x = 1; x <= 10000000; x++)
    {
        bool prime = true;

        if(x < 2)
            prime = false;

        for(int d = 2; d * d <= x; d++)
        {
            if(x % d == 0)
            {
                prime = false;
                break;
            }
        }

        if(prime)
        {
            cout << x << " Prime\n";
            countPrime++;
        }
        else
        {
            cout << x << " Non Prime\n";
            if(x > 1)  // only count composites
                countComposite++;
        }
    }

    cout << "\nTotal primes: " << countPrime << endl;
    cout << "Total composites: " << countComposite << endl;

    return 0;
}