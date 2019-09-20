#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a year: ";
    cin >> n;
    if ( n % 4 == 0)
        cout << n << " It is a leap year.";
    else
        cout << n << " It is not a leap year.";
    return 0;
}

