#include <iostream>
using namespace std;
int main()
{
    int n, i;
    int num[10], sum=0;
    cout << "Enter the numbers of data: ";
    cin >> n;
    while (n > 10 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 10)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }
    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }
    cout<<sum<<"the sum is:";
    return 0;
}
